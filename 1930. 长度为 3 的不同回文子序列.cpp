#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.size();
        int suf_cnt[26]{};
        int suf=0;
        for(int i=1;i<n;i++){
            int ch=s[i]-'a';
            suf_cnt[ch]++;
            suf|=1<<ch;
        }
        int pre=0;
        int has[26]{};
        for(int i=1;i<n-1;i++){
            int mid=s[i]-'a';
            suf_cnt[mid]--;
            if(suf_cnt[mid]==0){
                suf^=1<<mid;
            }
            pre|=1<<(s[i-1]-'a');
            has[mid]|=pre&suf;
        }
        int ans=0;
        for(int mask:has){
            ans+=popcount((uint32_t)mask);
        }
        return ans;
   }
};
