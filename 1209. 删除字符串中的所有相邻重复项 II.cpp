#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>> st={{}};
        for(char c:s){
            if(st.back().first!=c){
                st.emplace_back(c,1);
            }
            else if(st.back().second==k-1){
                st.pop_back();
            }
            else{
                st.back().second++;
            }
        }
        string ans;
        for(auto& [ch,cnt]:st){
            ans+=string(cnt,ch);
        }
        return ans;
    }
};