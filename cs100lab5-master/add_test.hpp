#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, AddEvaluateNonZero) {
    Op* val1 = new Op(8);
    Op* val2 = new Op(1);
    Add* test = new Add(val1,val2);
    EXPECT_EQ(test->evaluate(), 9);
}

TEST(AddTest, AddEvaluateNonzeroStringify) {
    Op* val1 = new Op(8);
    Op* val2 = new Op(1);
    Add* test = new Add(val1,val2);
    EXPECT_EQ(test->stringify(), "(8.000000+1.000000)");
}

TEST(AddTest, AddEvaluateNegativeVal) {
    Op* val1 = new Op(-5);
    Op* val2 = new Op(-6);
    Add* test = new Add(val1,val2);
    EXPECT_EQ(test->evaluate(), -11);
}

TEST(AddTest, AddEvaluateNegativeValStringify) {
    Op* val1 = new Op(-5);
    Op* val2 = new Op(-6);
    Add* test = new Add(val1,val2);
    EXPECT_EQ(test->stringify(), "(-5.000000+-6.000000)");
}


TEST(AddTest, AddEvaluateZero) {
    Op* val1 = new Op(0);
    Op* val2 = new Op(0);
    Add* test = new Add(val1,val2);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(AddTest, AddEvaluateStringifyZero) {
    Op* val1 = new Op(0);
    Op* val2 = new Op(0);
    Add* test = new Add(val1,val2);
    EXPECT_EQ(test->stringify(), "(0.000000+0.000000)");
}
  

#endif //__ADD_TEST_HPP__
