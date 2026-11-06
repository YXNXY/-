#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        string stk;
        for(char c:s){
            if(!stk.empty()&&c==stk.back()){
                stk.pop_back();
            }
            else{
                stk+=c;
            }
        }
       return stk;
    }
};