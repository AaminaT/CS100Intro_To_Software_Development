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
	virtual int number_of_children() {return 2; }
        virtual Base* get_child(int i){
                if(i==1){return leftOp;}
                if(i==2){return rightOp;}
        };
	virtual void accept(Visitor* visitor, int index) {
                if(index == 0){visitor ->visit_sub_begin(this);}
                if(index==1){visitor ->visit_sub_middle(this);}
                if(index==2){visitor ->visit_sub_end(this);}

        }
};

#endif //__SUB_HPP__
