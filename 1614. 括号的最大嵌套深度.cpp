#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int maxnum=0,nownum=0;
        for(char c:s){
            if(c=='('){
                nownum++;
                maxnum=max(maxnum,nownum);
            }
            else if(c==')'){
                nownum--;
            }
        }
        return maxnum;
    }
};