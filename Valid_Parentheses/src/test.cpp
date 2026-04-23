#include<gtest/gtest.h>
#include<valid.hpp>
TEST(ValidParenthesesTest, BasicCases){
    EXPECT_TRUE(isValid("()"));
    EXPECT_TRUE(isValid("()[]{}"));
    EXPECT_TRUE(isValid("([])")); 
    EXPECT_FALSE(isValid("(]"));
    EXPECT_FALSE(isValid("([)]"));
    EXPECT_TRUE(isValid("(([]){})"));
}

TEST(ValidParenthesesTest, EdgeCases) {
    EXPECT_FALSE(isValid("("));
    EXPECT_FALSE(isValid("]"));
    EXPECT_TRUE(isValid(""));
}