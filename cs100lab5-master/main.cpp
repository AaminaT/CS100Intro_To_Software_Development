#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "rand.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"

int main() {
    Op*   three    = new Op(3);
    Op*   seven    = new Op(7);
    Op*   four     = new Op(4);
    Op*   two      = new Op(2);
    Rand* test1    = new Rand();
    Mult* res1     = new Mult(seven, four);
    Div*  res2     = new Div(seven, four);
    Div*  comp_res = new Div(res1,three);
    //Base* add = new Add(three, mult);
    //Base* minus = new Sub(add, two);
    
    //std::cout << "Op Run: " << three->stringify()<< " and " << seven->evaluate() << std::endl;
    //std::cout << "Random Run: " << test1->stringify() << " and "  << test1->evaluate() << std::endl;
    std::cout << "Multiplication: " << res1->stringify() << " = " << res1->evaluate() << std::endl;
    std::cout << "Division: " << res2->stringify() << " = " << res2->evaluate() << std::endl;
    std::cout << "Composite Run: " << comp_res->stringify() << " = " << comp_res->evaluate() << std::endl;
    //std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    
    Op*   five    = new Op(5);
    Op*   ten    = new Op(10);
    Op*   nine     = new Op(9);
    Op*   eleven      = new Op(11);
    Mult* result1     = new Mult(five, eleven);
    Add*  result2     = new Add(ten, nine);
    Sub*  result3     = new Sub(eleven, nine);
    Pow*  result4     = new Pow(nine, five);
    Div*  composite_result = new Div(result4,result2);
    //Base* add = new Add(three, mult);
    //    //Base* minus = new Sub(add, two);
  
    std::cout << "Multiplication: " << result1->stringify() << " = " << result1->evaluate() << std::endl;
    std::cout << "Addition: " << result2->stringify() << " = " << result2->evaluate() << std::endl;
    std::cout << "Subtraction: " << result3->stringify() << " = " << result3->evaluate() << std::endl;
    std::cout << "Power: " << result4->stringify() << " = " << result4->evaluate() << std::endl;
    std::cout << "Composite Run: " << composite_result->stringify() << " = " << composite_result->evaluate() << std::endl;	
    return 0;
}
