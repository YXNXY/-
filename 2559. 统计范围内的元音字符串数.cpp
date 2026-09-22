#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> s(words.size()+1);
        vector<int> a(queries.size());
        const string VOWEL="aeiou";
        for(int i=0;i<words.size();i++){
            if(VOWEL.find(words[i][0])!=string::npos&&VOWEL.find(words[i].back())!=string::npos){
                s[i+1]=s[i]+1;
            }
            else{
                s[i+1]=s[i];
            }
        }
        for(int i=0;i<queries.size();i++){
            a[i]=s[queries[i][1]+1]-s[queries[i][0]];
        }
        return a;
    }
};