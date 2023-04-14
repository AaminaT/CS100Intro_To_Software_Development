#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest, PowEvaluateNonZero) {
    Op* val1 = new Op(8);
    Op* val2 = new Op(1);
    Pow* test = new Pow(val1,val2);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(PowTest, PowEvaluateNonzeroStringify) {
    Op* val1 = new Op(8);
    Op* val2 = new Op(1);
    Pow* test = new Pow(val1,val2);
    EXPECT_EQ(test->stringify(), "(8.000000**1.000000)");
}

TEST(PowTest, PowEvaluatePowerZero) {
    Op* val1 = new Op(8);
    Op* val2 = new Op(0);
    Pow* test = new Pow(val1,val2);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, PowEvaluatePowerZeroStringify) {
    Op* val1 = new Op(8);
    Op* val2 = new Op(0);
    Pow* test = new Pow(val1,val2);
    EXPECT_EQ(test->stringify(), "(8.000000**0.000000)");
}

TEST(PowTest, PowEvaluateNegative) {
    Op* val1 = new Op(-5);
    Op* val2 = new Op(1);
    Pow* test = new Pow(val1,val2);
    EXPECT_EQ(test->evaluate(), -5);
}

TEST(PowTest, PowEvaluateNegativeStringify) {
    Op* val1 = new Op(-5);
    Op* val2 = new Op(1);
    Pow* test = new Pow(val1,val2);
    EXPECT_EQ(test->stringify(), "(-5.000000**1.000000)");
}

TEST(PowTest, ChildrenNumber) {
    Op* value1 = new Op(5);
    Op* value2 = new Op(10);
    Pow* test = new Pow(value1,value2);
    EXPECT_EQ(test->number_of_children(), 2);
}

TEST(PowTest, GetChild1) {
    Op* value1 = new Op(7);
    Op* value2 = new Op(5);
    Pow* test = new Pow(value1,value2);
    EXPECT_EQ(test->get_child(1), value1);
}


TEST(PowTest, GetChild2) {
    Op* value1 = new Op(7);
    Op* value2 = new Op(5);
    Pow* test = new Pow(value1,value2);
    EXPECT_EQ(test->get_child(2), value2);
}

#endif //__POW_TEST_HPP__
