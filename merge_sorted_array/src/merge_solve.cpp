#include"merge_solve.hpp"

void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    std::vector<int> result = nums1;
    vector<int>::iterator it1{nums1.begin()};
    vector<int>::iterator it2{nums2.begin()};
    for(int i = 0, j = 0; i < nums1.size(); ++i){
            if(j >= m && it2 != nums2.end()){
            result[i] = *it2;
            ++it2;
            }
            else if(j < m && it2 == nums2.end()){
            result[i] = *it1;
            ++it1;
            ++j;
            }
            else if(j < m && *it1 == *it2){
                result[i] = *it1;
                ++i;
                result[i] = *it2;
                ++it1;
                ++j;
                ++it2;
            }
            else if(j < m && *it1 < *it2){
                result[i] = *it1;
                ++it1;
                ++j;
            }
            else if(j < m && *it2 < *it1){
                result[i] = *it2;
                ++it2;
            }
    }
    nums1 = result;
};
