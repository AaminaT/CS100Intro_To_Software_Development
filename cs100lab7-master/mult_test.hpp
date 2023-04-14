#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultEvaluatePositive) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(1);
    Mult* test = new Mult(value1,value2);
    EXPECT_EQ(test->evaluate(), 8.0);
}

TEST(MultTest, MultEvaluateNegative) {
    Op* value1 = new Op(-8);
    Op* value2 = new Op(1);
    Mult* test = new Mult(value1,value2);
    EXPECT_EQ(test->evaluate(), -8.0);
}

TEST(MultTest, MultEvaluateZero) {
    Op* value1 = new Op(0);
    Op* value2 = new Op(1);
    Mult* test = new Mult(value1,value2);
    EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(MultTest, MultStringifyPositive) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(1);
    Mult* test = new Mult(value1,value2);
    EXPECT_EQ(test->stringify(), "(8.000000*1.000000)");
}

TEST(MultTest, MultStringifyNegative) {
    Op* value1 = new Op(-8);
    Op* value2 = new Op(1);
    Mult* test = new Mult(value1,value2);
    EXPECT_EQ(test->stringify(), "(-8.000000*1.000000)");
}

TEST(MultTest, MultStringifyZero) {
    Op* value1 = new Op(0);
    Op* value2 = new Op(1);
    Mult* test = new Mult(value1,value2);
    EXPECT_EQ(test->stringify(), "(0.000000*1.000000)");
}

TEST(MultTest, ChildrenNumber) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(1);
    Mult* test = new Mult(value1,value2);
    EXPECT_EQ(test->number_of_children(), 2);
}

TEST(MultTest, GetChild1) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(1);
    Mult* test = new Mult(value1,value2);
    EXPECT_EQ(test->get_child(1), value1);
}

TEST(MultTest, GetChild2) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(1);
    Mult* test = new Mult(value1,value2);
    EXPECT_EQ(test->get_child(2), value2);
}

#endif //__MULT_TEST_HPP__
