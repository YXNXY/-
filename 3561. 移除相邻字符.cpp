#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string resultingString(string s) {
        int top=-1;
        for(char c:s){
            int t=c-'a';
            if(top>=0){
                int k=s[top]-'a';
                if(t==(k+1)%26||t==(k+25)%26){
                    top--;
                    continue;
                }
            }
            s[++top]=c;
        }
        s.resize(top+1);
        return s;
    }
};