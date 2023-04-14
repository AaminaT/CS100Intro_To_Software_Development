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
		convert += "*";
		convert += Right_op->stringify();
		convert += ")";
	}
        virtual double evaluate() { return Left_op->evaluate() * Right_op->evaluate(); }
        virtual std::string stringify() { return convert; }
};

#endif //__MULT_HPP__

