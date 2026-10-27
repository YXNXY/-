#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int mx=target.back();
        int i=0;
        for(int x=1;x<=mx;x++){
            ans.push_back("Push");
            if(x==target[i]){
                i++;
            }
            else{
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};