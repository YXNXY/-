#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int top=-1;
        for(int i=0;i<s.size();i++){
            if(top>=1&&s[i]=='c'&&s[top]=='b'&&s[top-1]=='a'){
                top-=2;
            }
            else{
                s[++top]=s[i];
            }
        }
        return top==-1;
    }
};