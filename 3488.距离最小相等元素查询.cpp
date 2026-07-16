#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int,vector<int>> pos;
        for(int i=0;i<nums.size();i++){
            pos[nums[i]].push_back(i);
        }
        for(auto& [_,p]:pos){
            int i0=p[0];
            p.insert(p.begin(),p.back()-nums.size());
            p.push_back(i0+nums.size());
        }
        for(int& i:queries){
            auto& p=pos[nums[i]];
            if(p.size()==3){
                i=-1;
            }
            else{
                int j=ranges::lower_bound(p,i)-p.begin();
                i=min(i-p[j-1],p[j+1]-i);
            }
        }
        return queries;
    }
};
