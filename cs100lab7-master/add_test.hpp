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

TEST(AddTest, ChildrenNumber) {
    Op* value1 = new Op(0);
    Op* value2 = new Op(1);
    Add* test = new Add(value1,value2);
    EXPECT_EQ(test->number_of_children(), 2);
}

TEST(AddTest, ChildrenNumberForNegativeVals) {
    Op* value1 = new Op(-8);
    Op* value2 = new Op(-10);
    Add* test = new Add(value1,value2);
    EXPECT_EQ(test->number_of_children(), 2);
}

TEST(AddTest, GetChild1) {
    Op* value1 = new Op(7);
    Op* value2 = new Op(5);
    Add* test = new Add(value1,value2);
    EXPECT_EQ(test->get_child(1), value1);
}


TEST(AddTest, GetChild2) {
    Op* value1 = new Op(7);
    Op* value2 = new Op(5);
    Add* test = new Add(value1,value2);
    EXPECT_EQ(test->get_child(2), value2);
}

#endif //__ADD_TEST_HPP__
