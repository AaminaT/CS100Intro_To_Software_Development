#include "gtest/gtest.h"

#include "op_test.hpp"
#include "add_test.hpp"
#include "sub_test.hpp"
#include "pow_test.hpp"
#include "rand_test.hpp"
#include "mult_test.hpp"
#include "div_test.hpp"

TEST(CompositeTest, CompositeEvaluate) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(1);
    Mult* value3 = new Mult(value1,value2);
    Op* value4 = new Op(2);
    
    Div* test = new Div(value3,value4);
    EXPECT_EQ(test->evaluate(), 4.0);
}

TEST(CompositeTest, CompositeStingify) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(1);
    Mult* value3 = new Mult(value1,value2);
    Op* value4 = new Op(2);

    Div* test = new Div(value3,value4);
    EXPECT_EQ(test->stringify(),"((8.000000*1.000000)/2.000000)" );
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
