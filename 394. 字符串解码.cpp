#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s){
        stack<pair<string,int>> stk;
        string res;
        int k=0;
        for(char c:s){
            if(isalpha(c)){
                res+=c;
            }
            else if(isdigit(c)){
                k=k*10+(c-'0');
            }
            else if(c=='['){
                stk.emplace(move(res),k);
                k=0;
            }
            else{
                auto t=move(res);
                res=move(stk.top().first);
                k=stk.top().second;
                stk.pop();
                for(;k>0;k--){
                    res+=t;
                }
            }
        }
        return res;
    }
};