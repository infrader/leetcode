#include"relist.hpp"
#include<gtest/gtest.h>
#include<vector>

TEST(Reverse_List, Rev_True){
    //
    std::vector<int> temp{1,2,3,4,5,6};
    std::vector<int> result{6,5,4,3,2,1};
    EXPECT_EQ(test_reverseList(temp), result);
    //
    //
    std::vector<int> temp1{55,5,5,5,5,55};
    std::vector<int> result1{55,5,5,5,5,55};
    EXPECT_EQ(test_reverseList(temp1), result1);
    //
    //
    std::vector<int> temp2{6,5};
    std::vector<int> result2{5,6};
    EXPECT_EQ(test_reverseList(temp2), result2);
    //
}
TEST(Reverse_List, Rev_False){
//
    std::vector<int> temp{1,2,3,4,5,6};
    std::vector<int> result{1,2,3,4,5,6};
    EXPECT_FALSE(result == test_reverseList(temp));
    //
    //
    std::vector<int> temp1{55,5};
    std::vector<int> result1{0};
    EXPECT_FALSE(result1 == test_reverseList(temp1));
    //
    //
    std::vector<int> temp2{6,5,43,324,5,54,3,346,5,6,7,34,2,1234,6,6,5,3,34,5,43,43,4,342,234,5,436,6,741234,};
    std::vector<int> result2{};
    EXPECT_FALSE(result2 == test_reverseList(temp2));
    //

}
TEST(Reverse_List, Expect_zero){
//
    std::vector<int> temp{};
    std::vector<int> result{};
    EXPECT_TRUE(result == test_reverseList(temp));
    
    //
    //
    std::vector<int> temp1{0};
    std::vector<int> result1{-1};
    EXPECT_FALSE(result1 == test_reverseList(temp1));
    //
    //
    std::vector<int> temp2{6};
    std::vector<int> result2{};
    EXPECT_FALSE(result2 == test_reverseList(temp2));
    //
}