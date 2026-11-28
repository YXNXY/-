#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> stk;
        for(int i=0;i<prices.size();i++){
            int x=prices[i];
            while(!stk.empty()&&x<=prices[stk.top()]){                   
                prices[stk.top()]-=x;
                stk.pop();
            }
            stk.push(i);
        }
        return prices;
    }
};