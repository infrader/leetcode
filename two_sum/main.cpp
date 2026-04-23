#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_multimap<int, int> nums_map;
    for(int i = 0; i < nums.size(); ++i){
        std::pair<int,int> temp{nums[i], i};
        nums_map.insert(temp);
    }
    for(int i = 0; i < nums.size() - 1; ++i){
        auto it = nums_map.find(target - nums[i]);
        if(it != nums_map.end() && it->first + nums[i] == target){
            std::vector<int> result(i, it->second);
            return result;
        }
    }
    std::vector<int> error{0,0};
    return error;
    }
};


int main(){
    Solution sl;
    std::vector<int> nums{7, 3, 4, 5, 3, 45, 5, 1, 8, 2, 7, 11};
    int target = 19;
    std::vector<int> result = sl.twoSum(nums, target);
    if(!result.empty()){
    std::cout << "["<< result[0] << ","<<result[1]<<"]\n";
    }
}