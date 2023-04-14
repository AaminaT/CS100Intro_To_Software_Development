#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivTest, DivEvaluatePositive) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(1);
    Div* test = new Div(value1,value2);
    EXPECT_EQ(test->evaluate(), 8.0);
}

TEST(DivTest, DivEvaluateNegative) {
    Op* value1 = new Op(-8);
    Op* value2 = new Op(1);
    Div* test = new Div(value1,value2);
    EXPECT_EQ(test->evaluate(), -8.0);
}

TEST(DivTest, DivEvaluateZero) {
    Op* value1 = new Op(0);
    Op* value2 = new Op(1);
    Div* test = new Div(value1,value2);
    EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(DivTest, DivStringifyPositive) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(1);
    Div* test = new Div(value1,value2);
    EXPECT_EQ(test->stringify(), "(8.000000/1.000000)");
}

TEST(DivTest, DivStringifyNegative) {
    Op* value1 = new Op(-8);
    Op* value2 = new Op(1);
    Div* test = new Div(value1,value2);
    EXPECT_EQ(test->stringify(), "(-8.000000/1.000000)");
}

TEST(DivTest, DivStringifyZero) {
    Op* value1 = new Op(0);
    Op* value2 = new Op(1);
    Div* test = new Div(value1,value2);
    EXPECT_EQ(test->stringify(), "(0.000000/1.000000)");
}

#endif //__DIV_TEST_HPP__
