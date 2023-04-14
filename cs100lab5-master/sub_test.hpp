#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, SubEvaluateNonZero) {
    Op* val1 = new Op(8);
    Op* val2 = new Op(1);
    Sub* test = new Sub(val1,val2);
    EXPECT_EQ(test->evaluate(), 7);
}

TEST(SubTest, SubEvaluateNonzeroStringify) {
    Op* val1 = new Op(8);
    Op* val2 = new Op(1);
    Sub* test = new Sub(val1,val2);
    EXPECT_EQ(test->stringify(), "(8.000000-1.000000)");
}
TEST(SubTest, SubEvaluateZero) {
    Op* val1 = new Op(0);
    Op* val2 = new Op(0);
    Sub* test = new Sub(val1,val2);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(SubTest, SubEvaluateZeroStringify) {
    Op* val1 = new Op(0);
    Op* val2 = new Op(0);
    Sub* test = new Sub(val1,val2);
    EXPECT_EQ(test->stringify(), "(0.000000-0.000000)");
}

TEST(SubTest, SubEvaluateNegativeVals) {
    Op* val1 = new Op(-6);
    Op* val2 = new Op(-5);
    Sub* test = new Sub(val1,val2);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(SubTest, SubEvaluateNegativeValsStringify) {
    Op* val1 = new Op(-6);
    Op* val2 = new Op(-5);
    Sub* test = new Sub(val1,val2);
    EXPECT_EQ(test->stringify(), "(-6.000000--5.000000)");
}

#endif //__SUB_TEST_HPP__
