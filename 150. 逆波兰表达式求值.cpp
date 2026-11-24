#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(auto& token:tokens){
            char c=token[0];
            if(token.size()>1||isdigit(c)){
                stk.push(stoi(token));
                continue;
            }
            int x=stk.top();
            stk.pop();
            if(c=='+'){
                stk.top()+=x;
            }
            else if(c=='-'){
                stk.top()-=x;
            }
            else if(c=='*'){
                stk.top()*=x;
            }
            else{
                stk.top()/=x;
            }
        }
        return stk.top();
    }
};