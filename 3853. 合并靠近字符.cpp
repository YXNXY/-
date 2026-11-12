#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeCharacters(string s, int k) {
        string stk;
        vector<int> last(26,INT_MIN/2);
        for(char ch:s){
            if(stk.size()-last[ch-'a']>k){
                last[ch-'a']=stk.size();
                stk+=ch;
            }
        }
        return stk;
    }
};