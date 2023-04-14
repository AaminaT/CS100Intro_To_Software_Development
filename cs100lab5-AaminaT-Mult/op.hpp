#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    private:
	double operand;
	std::string convert;
    public:
        Op(double value) : Base() {
		operand = value;
		convert = std::to_string(operand); }
        virtual double evaluate() { return operand; }
        virtual std::string stringify() { return convert; }
};

#endif //__OP_HPP__
