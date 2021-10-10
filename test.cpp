#include "c-echo.h"

#include "gtest/gtest.h"

 TEST(EchoTest, HelloWorld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3,test_val));
 }

 TEST(EchoTest, EmptyString) {
   char* test_val[1]; test_val[0] = "./c-echo";
   EXPECT_EQ("", echo(1,test_val));
 }

 TEST(EchoTest, MyName) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "Hannah"; test_val[2] = "Bach";
	EXPECT_EQ("Hannah Bach", echo(3,test_val));
 }
 
 TEST(EchoTest, Fruit) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "Grapes";
	EXPECT_EQ("Grapes", echo(2,test_val));
 }

 TEST(EchoTest, Quote) {
	char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "Own"; test_val[2] = "who"; test_val[3] = "you"; test_val[4] = "are";
	EXPECT_EQ("Own who you are", echo(5,test_val));
 }

 int main(int argc, char **argv) {
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
 }
