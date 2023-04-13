#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest,Numbers){
  char*test_val[4]; test_val[0] = "/.c-echo"; test_val[1]= "12345"; test_val[2] = "6789";test_val[3] = "100000";
  EXPECT_EQ("12345 6789 100000",echo(4,test_val));
}

TEST(EchoTest, TypographicalSymbols){
char*test_val[2]; test_val[0] = "/.c-echo.h"; test_val[1]="!@#$%^&*(){}[]<>:;?/";
EXPECT_EQ("!@#$%^&*(){}[]<>:;?/", echo(2,test_val));
}

TEST(EchoTest, UpperCaseLowerCase){
char*test_val[3]; test_val[0]= "/.c-echo.h"; test_val[1] = "ABCD"; test_val[2] = "abcd";
EXPECT_EQ("ABCD abcd", echo(3, test_val));
}
