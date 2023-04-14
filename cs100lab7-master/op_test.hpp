#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluatePositive) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8.0);
}

TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-8);
    EXPECT_EQ(test->evaluate(), -8.0);
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(OpTest, OpStringifyPositive) {
    Op* test = new Op(8);
    EXPECT_EQ(test->stringify(), "8.000000");
}

TEST(OpTest, OpStringifyNegative) {
    Op* test = new Op(-8);
    EXPECT_EQ(test->stringify(), "-8.000000");
}

TEST(OpTest, OpStringifyZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->stringify(), "0.000000");
}

TEST(OpTest, ChildrenNumber) {
    Op* test = new Op(8);
    EXPECT_EQ(test->number_of_children(), 0);
}

TEST(OpTest, GetChild) {
    Op* test = new Op(8);
    Op* result = NULL;
    EXPECT_EQ(test->get_child(1), result);
}

#endif //__OP_TEST_HPP__
