#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int d[52]{};
        int s=0;
        for(auto& range:ranges){
            d[range[0]]++;
            d[range[1]+1]--;
        }
        for(int i=0;i<=right;i++){
            s+=d[i];
            if(i>=left&&s<=0){
                return 0;
            }
        }
        return 1;
    }
};