#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base {
     private:
        Base* leftOp;
	Base* rightOp;
        std::string convert;
     public:
        Add(Base* opLeft, Base* opRight) : Base() {
		leftOp = opLeft;
		rightOp = opRight;
		convert = "(";
     		convert += leftOp->stringify();
		convert += "+";
		convert += rightOp->stringify();
		convert+= ")";
 }
        virtual double evaluate(){return leftOp->evaluate()+ rightOp->evaluate();}
        virtual std::string stringify() { return convert; }
};

#endif //__ADD_HPP__
