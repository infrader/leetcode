#include"relist.hpp"

ListNode* Solution::reverseList(ListNode* head){
    if(!head || !head->next){
        return head;
    }
    ListNode* back;
    if(head->next){
        back = reverseList(head->next);
    }
    if(!head->next){
        ListNode* last  = head;
        return last;
    }
    head->next->next = head;
    head->next = nullptr;
    return back;
};

std::vector<int> test_reverseList(std::vector<int> vc){
ListNode list;
ListNode* head = &list;
for(auto it: vc){
    head->next = new ListNode(it);
    head = head->next;
}
Solution sl;
head = sl.reverseList(list.next);
std::vector<int> temp;
while(head){
    temp.push_back(head->val);
    head = head->next;
}
return temp;
};