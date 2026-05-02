#include"relist.hpp"
#include<iostream>

int main(){
    Solution sl;
    ListNode lis(0);
    ListNode* curr = &lis;
    std::vector<int> vec{1,2,3,4,5,6};
    for(auto i: vec){
        curr->next = new ListNode(i);
        curr = curr->next;
    }
   vec = test_reverseList(vec);
   for(auto it: vec){
    std::cout << it << "\t";
   }
   std::cout << "\n";
}
