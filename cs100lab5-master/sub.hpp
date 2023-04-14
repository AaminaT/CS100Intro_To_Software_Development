#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub : public Base {
     private:
        Base* leftOp;
        Base* rightOp;
        std::string convert;
     public:
        Sub(Base* opLeft, Base* opRight) : Base() {
                leftOp = opLeft;
                rightOp = opRight;
                convert = "(";
                convert += leftOp->stringify();
                convert += "-";
                convert += rightOp->stringify();
                convert+= ")";
 }
        virtual double evaluate(){return leftOp->evaluate()- rightOp->evaluate();}
        virtual std::string stringify() { return convert; }
};

#endif //__SUB_HPP__
