#include"sort_color.hpp"
#include<iostream>

int main(){
    std::vector<int> nums{0,2,1};
    sortColors(nums);
    for(auto it: nums){
        std::cout << it << " ";
    }
    std::cout << "\n";
}