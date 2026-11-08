#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeGood(string s) {
        string stk;
        for(char c:s){
            if(!stk.empty()&&(c==stk.back()+32||c==stk.back()-32)){
                stk.pop_back();
            }
            else{
                stk+=c;
            }
        }
        return stk;
    }
};