#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluateOne) {
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 83.0);
}

TEST(RandTest, RandEvaluateTwo) {
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 86.0);
}

TEST(RandTest, RandEvaluateThree) {
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 77.0);
}

TEST(RandTest, RandStringifyOne) {
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "15.000000");
}

TEST(RandTest, RandStringifyTwo) {
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "93.000000");
}

TEST(RandTest, RandStringifyThree) {
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "35.000000");
}

#endif //__RAND_TEST_HPP__
