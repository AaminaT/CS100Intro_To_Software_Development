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
                convert = "(";
                convert += Left_op->stringify();
                convert += "/";
                convert += Right_op->stringify();
                convert += ")";
        }
        virtual double evaluate() {
		if(Right_op->evaluate() == 0) {
			throw "Error, division by zero";
		}
		return Left_op->evaluate() / Right_op->evaluate();
	}
        virtual std::string stringify() { return convert; }
};
