#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        int left=0,right=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                left++;
            }
            else if(left>0){
                left--;
            }
            else{
                right++;
            }            
        }
        return left+right;
    }
};