#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int fnum=nums[i];
            int lnum=nums[i]%10;
            for(int j=0;j<10;j++){
                if(mp[j]&&gcd(lnum,j)==1){
                    ans+=mp[j];
                }
            }
            while(fnum>=10){
                fnum/=10;
            }
            mp[fnum]++;
        }
        return ans;
    }
};