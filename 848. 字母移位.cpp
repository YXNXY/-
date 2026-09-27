#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.size(),curr=0;
        for(int i=n-1;i>=0;i--){
            curr=(curr+shifts[i])%26;
            s[i]=(char)((s[i]-'a'+curr)%26+'a');
        }
        return s;
    }
};