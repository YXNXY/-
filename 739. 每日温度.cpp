#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n);
        stack<int> stk;
        for(int i=n-1;i>=0;i--){
            int x=temperatures[i];
            while(!stk.empty()&&temperatures[stk.top()]<=x){
                stk.pop();
            }
            if(stk.empty()){
                ans[i]=0;
            }
            else{
                ans[i]=stk.top()-i;
            }
            stk.push(i);
        }
        return ans;
    }
};
