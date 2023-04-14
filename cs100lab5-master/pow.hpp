#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <math.h>
class Pow : public Base {
     private:
        Base* leftOp;
        Base* rightOp;
        std::string convert;
     public:
        Pow(Base* opLeft, Base* opRight) : Base() {
                leftOp = opLeft;
                rightOp = opRight;
                convert = "(";
                convert += leftOp->stringify();
                convert += "**";
                convert += rightOp->stringify();
                convert+= ")";
 }
        virtual double evaluate(){return pow(leftOp->evaluate(), rightOp->evaluate());}
        virtual std::string stringify() { return convert; }
};

#endif //__POW_HPP__
