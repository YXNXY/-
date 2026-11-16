#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char,char> mp={{'}','{'},{')','('},{']','['}};
        if(s.size()%2){
            return 0;
        }
        for(char c:s){
            if(!mp.contains(c)){
                stk.push(c);
            }
            else{
                if(stk.empty()||mp[c]!=stk.top()){
                    return 0;
                }
                stk.pop();
            }
        }
        return stk.empty();
    }
};