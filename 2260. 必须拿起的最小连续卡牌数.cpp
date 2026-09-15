#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> mp;
        int ans=cards.size()+1;
        for(int i=0;i<cards.size();i++){
            if(mp.count(cards[i])){
                ans=min(ans,i-mp[cards[i]]);
            }
            mp[cards[i]]=i;
        }
        return (ans==cards.size()+1)?-1:ans+1;
    }
};