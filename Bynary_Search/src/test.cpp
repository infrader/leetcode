#include"binary.hpp"
#include<gtest/gtest.h>
#include<vector>

TEST(BinarySearch, FoundInMidle){
    std::vector<int> nums1{1, 2, 3};
    EXPECT_EQ(search(nums1, 2), 1);
    
    std::vector<int> nums2{1, 2, 3, 5, 6};
    EXPECT_EQ(search(nums2, 3), 2);
    
    std::vector<int> nums3{23,45,67,210,980,2345};
    EXPECT_EQ(search(nums3, 210), 3);
    
    std::vector<int> nums4{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    EXPECT_EQ(search(nums4, 10), 9);
    //
    std::vector<int> nums5{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    EXPECT_EQ(search(nums5, 13), 12);
    //
    std::vector<int> nums6{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    EXPECT_EQ(search(nums6, 8), 7);
}
TEST(BinarySearch, FoundInRight){
    std::vector<int> nums1{1, 2, 3};
    EXPECT_EQ(search(nums1, 1), 0);
    
    std::vector<int> nums2{1, 2, 3, 5, 6};
    EXPECT_EQ(search(nums2, 2), 1);
    
    std::vector<int> nums3{23,45,67,210,980,2345};
    EXPECT_EQ(search(nums3, 45), 1);
    
    std::vector<int> nums4{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    EXPECT_EQ(search(nums4, 1), 0);
    //
    std::vector<int> nums5{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    EXPECT_EQ(search(nums5, 5), 4);
    //
    std::vector<int> nums6{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    EXPECT_EQ(search(nums6, 3), 2);
    std::vector<int> nums7{-1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    EXPECT_EQ(search(nums7, -1), 0);
}
TEST(BinarySearch, FoundInLeft){
    std::vector<int> nums1{1, 2, 3};
    EXPECT_EQ(search(nums1, 3), 2);
    
    std::vector<int> nums2{1, 2, 3, 5, 6};
    EXPECT_EQ(search(nums2, 5), 3);
    
    std::vector<int> nums3{23,45,67,210,980,2345};
    EXPECT_EQ(search(nums3, 980), 4);
    
    std::vector<int> nums4{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    EXPECT_EQ(search(nums4, 16), 15);
    //
    std::vector<int> nums5{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    EXPECT_EQ(search(nums5, 13), 12);
    //
    std::vector<int> nums6{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    EXPECT_EQ(search(nums6, 15), 14);
    std::vector<int> nums7{-1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    EXPECT_EQ(search(nums7, 11), 10);
}
TEST(BinarySearch, FoundFalse){
    
    std::vector<int> nums1{1, 2, 3};
    EXPECT_EQ(search(nums1, 23), -1);
    //
     std::vector<int> nums2{23,545,1233,24124,53445,666543,100000000};
    EXPECT_EQ(search(nums2, 235), -1);
    //
    std::vector<int> nums3{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    EXPECT_EQ(search(nums3, 18), -1);
    //
    std::vector<int> nums4{1};
    EXPECT_EQ(search(nums4, 2), -1);
    //
    std::vector<int> nums5{1,23};
    EXPECT_EQ(search(nums5, 12), -1);
    //
    std::vector<int> nums6{};
    EXPECT_EQ(search(nums6, 23), -1);
    
}