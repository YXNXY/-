#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        while(i<n&&s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<n&&(s[i]=='+'||s[i]=='-')){
            sign=s[i]=='+'?1:-1;
            i++;
        }
        int num=0;
        for(;i<n&&isdigit(s[i]);i++){
            int d=s[i]-'0';
            if(num>INT_MAX/10||num*10>INT_MAX-d){
                return sign>0?INT_MAX:INT_MIN;
            }
            num=num*10+d;
        }
        return sign*num;
    }
};