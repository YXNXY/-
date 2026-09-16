#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map<string,int> cnt_words;
        for(auto&s:words){
            cnt_words[s]++;
        }
        unordered_map<string,int> mp;
        long long ans=0;
        for(auto& [s,c]:cnt_words){
            string t=move(s);
            char base=s[0];
            for(char& ch:t){
                ch=(ch-base+26)%26;
            }
            ans+=1LL*mp[t]*c+1LL*c*(c-1)/2;
            mp[t]+=c;
        }
        return ans;
    }
};