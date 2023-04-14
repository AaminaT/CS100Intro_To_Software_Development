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

TEST(SubTest, ChildrenNumber) {
    Op* value1 = new Op(5);
    Op* value2 = new Op(10);
    Sub* test = new Sub(value1,value2);
    EXPECT_EQ(test->number_of_children(), 2);
}

TEST(SubTest, GetChild1) {
    Op* value1 = new Op(7);
    Op* value2 = new Op(5);
    Sub* test = new Sub(value1,value2);
    EXPECT_EQ(test->get_child(1), value1);
}


TEST(SubTest, GetChild2) {
    Op* value1 = new Op(7);
    Op* value2 = new Op(5);
    Sub* test = new Sub(value1,value2);
    EXPECT_EQ(test->get_child(2), value2);
}


#endif //__SUB_TEST_HPP__
