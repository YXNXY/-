#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int cnt[10][10]{};
        int ans=0;
        for(int i=0;i<dominoes.size();i++){
            auto[a,b]=minmax(dominoes[i][0],dominoes[i][1]);
            ans+=cnt[a][b]++;
        }
        return ans;
    }
};
