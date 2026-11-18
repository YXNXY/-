#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        int left=0;
        string stk;
        for(char c:s){
            if(c=='('){
                if(left>0){
                    stk+=(c);
                }
                left++;
            }
            else{
                left--;
                if(left>0){
                    stk+=(c);
                }
            }
        }
        return stk;
    }
};