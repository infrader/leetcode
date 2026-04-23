#include"binary.hpp"

//nums = [-1,0,3,5,9,12], target = 9 Output: 4
int Solution::search(std::vector<int>& nums, int target){
    if(nums.size() < 1){return -1;}
    if(nums.size() == 1 && nums[0] != target){return -1;}
    std::vector<int>::iterator bg{nums.begin()};
    std::vector<int>::iterator en{nums.end()};
    std::vector<int>::iterator sr;
    for(int i = 0; i < nums.size(); ++i){
        sr = bg + ((en - bg)/2);
        if(sr == bg && *sr != target){
            return -1;
        }
        if(sr == en && *sr != target){
            return -1;
        }
        if(*sr == target){
            return std::distance(nums.begin(), sr);
        }
        if(*sr > target){
            en = sr;
        }
        if(*sr < target){
            bg = sr;
        }
    }
    return -1;
};

int search(std::vector<int>& nums, int target){
Solution sl;
return sl.search(nums, target);
};
