#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3, test_val));
}

TEST(EchoTest, EmptyString) {
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, Password) {
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "Dfer223e8erW";
	EXPECT_EQ("Dfer223e8erW", echo(2, test_val));
}

TEST(EchoTest, Sentence) {
	char*  test_val[6]; test_val[0] ="./c-echo"; test_val[1] = "Hi!"; test_val[2] = "My"; test_val[3] = "name"; test_val[4] = "is"; test_val[5] = "Ashna.";
	EXPECT_EQ("Hi! My name is Ashna.", echo(6, test_val));
}

TEST(EchoTest, NumbersAndSpecialChars) {
	char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "123456789"; test_val[2] = "!@#$%^&&"; test_val[3] = "1!2@3#4$5%6^7&8*";
	EXPECT_EQ("123456789 !@#$%^&& 1!2@3#4$5%6^7&8*", echo(4, test_val));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
