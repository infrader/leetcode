#include"sort_color.hpp"
#include<gtest/gtest.h>
using namespace std;

TEST(Sort_Color, Ejemplo){
    vector<int> t1{2,0,2,1,1,0};
    vector<int> expected1{0,0,1,1,2,2};
    sortColors(t1);        
    EXPECT_TRUE (t1 == expected1);
}
TEST(Sort_Color, clasificaste){
    vector<int> t2{0,0,1,1,2,2};
    vector<int> expected2{0,0,1,1,2,2};
    sortColors(t2);        
    EXPECT_TRUE (t2 == expected2);
}
TEST(Sort_Color, reverse_order){
    vector<int> t3{2,2,1,1,0,0};
    vector<int> expected3{0,0,1,1,2,2};
    sortColors(t3);        
    EXPECT_TRUE (t3 == expected3);

}