#include "valid.hpp"
#include<iostream>
int main(){
    Solution sl;
    std::string str{"{{(){()}}[]}"};
    bool is_valid = sl.isValid(str);
    std::cout << is_valid << "\n";
}