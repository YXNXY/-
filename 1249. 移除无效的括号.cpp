#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<int> stk;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                stk.push_back(i);
            }
            else if(s[i]==')'){
                if(!stk.empty()){
                    stk.pop_back();
                }
                else{
                    s[i]=0;
                }
            }
        }
        for(int i:stk){
            s[i]=0;
        }
        for(char c:s){
            if(c){
                ans+=c;
            }
        }
        return ans;
    }
};