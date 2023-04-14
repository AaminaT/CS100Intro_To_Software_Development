#include "base.hpp"

class Div : public Base {
    private:
        Base* Left_op;
        Base* Right_op;
        std::string convert;
    public:
        Div(Base* opL, Base* opR) : Base() {
                Left_op = opL;
                Right_op = opR;
		convert += "\\frac";
		//convert = "{";
                convert += Left_op->stringify();
                convert += Right_op->stringify();
		//convert += "}";
        }
        virtual double evaluate() {
		if(Right_op->evaluate() == 0) {
			throw "Error, division by zero";
		}
		return Left_op->evaluate() / Right_op->evaluate();
	}
        virtual std::string stringify() { return convert; }
	virtual int number_of_children() {return 2; }
        virtual Base* get_child(int i){
                if(i==1){return Left_op;}
                if(i==2){return Right_op;}
        };
	virtual void accept(Visitor* visitor, int index) {
                if(index == 0){visitor ->visit_div_begin(this);}
                if(index==1){visitor ->visit_div_middle(this);}
                if(index==2){visitor ->visit_div_end(this);}

        }
};
