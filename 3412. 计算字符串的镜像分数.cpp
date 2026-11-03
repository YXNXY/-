#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long calculateScore(string s) {
        stack<int> stk[26];
        long long ans=0;
        for(int i=0;i<s.size();i++){
            int k=s[i]-'a';
            if(!stk[25-k].empty()){
                ans+=i-stk[25-k].top();
                stk[25-k].pop();
            }else{
                stk[k].push(i);
            }
        }
        return ans;
    }
};