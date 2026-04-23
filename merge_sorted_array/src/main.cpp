#include "merge_solve.hpp"
#include<iostream>

int main(){
std::vector<int> nums1{0,0,3,0,0,0,0,0,0};
std::vector<int> nums2{-1,1,1,1,2,3};
int m = 3;
int n = 6;
Solution sl;
for(const auto& it: nums1){
    std::cout << it << "\t";
}
std::cout << "\n";
for(const auto& it: nums2){
    std::cout << it << "\t";
}
std::cout << "\n";
sl.merge(nums1, m,nums2,n);

std::cout << "\nResult:\n";

for(const auto& it: nums1){
    std::cout << it << "\t";
}
std::cout << "\n";
}
