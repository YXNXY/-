#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stk;
        string temp;
        path+="/";
        int i=0;
        while(i<path.size()){
            char c=path[i];
            if (c!='/'){
                temp+=c;
                i++;
                continue;
            }
            if(temp==".."&&!stk.empty()){
                stk.pop_back();
            }
            else if(temp!=".."&&temp!="."&&temp!=""){
                stk.push_back(temp);
            }
            i++;
            temp="";
        }
        string ans;
        for(string& s:stk){
            ans+='/';
            ans+=s;
        }
        return stk.empty()?"/":ans;
    }
};