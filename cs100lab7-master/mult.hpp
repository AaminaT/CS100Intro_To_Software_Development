#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
    private:
        Base* Left_op;
	Base* Right_op;
        std::string convert;
    public:
        Mult(Base* opL, Base* opR) : Base() {
                Left_op = opL;
		Right_op = opR;
		convert = "(";
		convert += Left_op->stringify();
		convert += "\\cdot";
		convert += Right_op->stringify();
		convert += ")";
	}
        virtual double evaluate() { return Left_op->evaluate() * Right_op->evaluate(); }
        virtual std::string stringify() { return convert; }
        virtual int number_of_children() { return 2; }
        virtual Base* get_child(int i) {
	if(i == 1)
		return Left_op;
	else if(i == 2)
		return Right_op;
	}

        virtual void accept(Visitor* visitor, int index) {
                if(index == 0){visitor ->visit_mult_begin(this);}
                if(index==1){visitor ->visit_mult_middle(this);}
                if(index==2){visitor ->visit_mult_end(this);}

        }
};

#endif //__MULT_HPP__
