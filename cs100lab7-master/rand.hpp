#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <cstdlib>

class Rand : public Base {
    private:
        double operand;
        std::string convert;
	Base* forOperand;
    public:
        Rand() : Base() {
                operand = rand() % 100;
		forOperand = operand;
                convert = std::to_string(operand); }
        virtual double evaluate() { return operand; }
        virtual std::string stringify() { return convert; }
        virtual int number_of_children(){ return 0; }
        virtual Base* get_child(int i){ return NULL; }
	virtual void accept(Visitor* visitor, int index){
		visitor->visit_rand(this);
	}
};

#endif //__RAND_HPP__
