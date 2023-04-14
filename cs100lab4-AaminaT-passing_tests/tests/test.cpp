#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(ConstructorTest,RegularConstructor){
   Rectangle rect1;
   rect1=Rectangle(5,10);
   EXPECT_EQ(5,rect1.get_width());
   EXPECT_EQ(10, rect1.get_height());
}

TEST(ConsturctorTest, NegativeVals){
   Rectangle rect2;
   rect2  = Rectangle(-5,-10);
   EXPECT_EQ(-5, rect2.get_width());
  EXPECT_EQ(-10, rect2.get_height());
}

TEST(ConsturctorTest, LargeVals){
   Rectangle rect3;
   rect3  = Rectangle(100,200);
   EXPECT_EQ(100, rect3.get_width());
  EXPECT_EQ(200, rect3.get_height());
}
TEST(AreaTest, PositiveTest) {
    Rectangle result(5,3);
    EXPECT_EQ(15,result.area());
}

TEST(AreaTest, NegativeTest) {
    Rectangle result(5,-3);
    EXPECT_EQ(-15,result.area());
}

TEST(AreaTest, ZeroTest) {
    Rectangle result(0,3);
    EXPECT_EQ(0,result.area());
}

TEST(PerimeterTest, ZeroTest) {
    Rectangle result(0,0);
    EXPECT_EQ(0,result.area());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
