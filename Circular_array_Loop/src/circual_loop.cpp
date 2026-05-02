#include"circual_loop.hpp"

int next(std::vector<int>& nums, int it){
int sz = static_cast<int>(nums.size());
int next = (it + nums[it]) % sz;
next = (next + sz) % sz;
return next;
}

bool circularArrayLoop(std::vector<int>& nums){
   bool result{false};
    int sz = static_cast<int>(nums.size());
for(int counter = 0; sz > counter; ++counter){
    if(result){break;}
    if(nums[counter] == 0){
        continue;
    }
    int slow = next(nums,counter);
    int fast = next(nums,next(nums,counter));
    bool not_val{false};
    int step{1};
    while(fast != slow){
    if((nums[slow] <= 0 && (nums[fast] >= 0 || nums[next(nums,fast)] >= 0))
    || (nums[slow] >= 0 && (nums[fast] <= 0 || nums[next(nums,fast)] <= 0))){
        not_val = true;
        break;
    }
    slow = next(nums,slow);
    fast = next(nums,next(nums,fast));
    ++step;
    }

    if(step > 1 && !not_val && slow != next(nums,fast)){
        result = true;
        continue;
    }else{
        int slow = counter;
        int fast = next(nums,counter);
        nums[slow] = 0;
        while(nums[fast] != nums[slow]){
            int temp = next(nums,fast);
            nums[fast] = 0;
            fast = temp;
        }
        result = false;
        continue;
    }
}
return result;
};
