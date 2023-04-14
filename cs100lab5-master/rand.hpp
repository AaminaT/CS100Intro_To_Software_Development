#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <cstdlib>

class Rand : public Base {
    private:
        double operand;
        std::string convert;
    public:
        Rand() : Base() {
                operand = rand() % 100;
                convert = std::to_string(operand); }
        virtual double evaluate() { return operand; }
        virtual std::string stringify() { return convert; }
};

#endif //__RAND_HPP__

