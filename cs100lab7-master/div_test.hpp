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

TEST(DivTest, ChildrenNumber) {
    Op* value1 = new Op(5);
    Op* value2 = new Op(10);
    Div* test = new Div(value1,value2);
    EXPECT_EQ(test->number_of_children(), 2);
}

TEST(DivTest, GetChild1) {
    Op* value1 = new Op(7);
    Op* value2 = new Op(5);
    Div* test = new Div(value1,value2);
    EXPECT_EQ(test->get_child(1), value1);
}


TEST(DivTest, GetChild2) {
    Op* value1 = new Op(7);
    Op* value2 = new Op(5);
    Div* test = new Div(value1,value2);
    EXPECT_EQ(test->get_child(2), value2);
}

#endif //__DIV_TEST_HPP__
