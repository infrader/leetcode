#include"sort_color.hpp"

void Solution_Sort::sortColors(std::vector<int>& nums){
    int left{0}, right{static_cast<int>(nums.size())- 1}, mid{left};
    while(mid <= right){
        if(nums[mid] == 0){
            std::swap(nums[left], nums[mid]);
            ++left; ++mid;
        }
        else if(nums[mid] == 1){
            ++mid;
        }
        else{
            std::swap(nums[mid], nums[right]);
            --right;
        }
    }

}

void sortColors(std::vector<int>& nums){
    Solution_Sort sl;
    sl.sortColors(nums);
}