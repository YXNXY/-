#include <bits/stdc++.h>
using namespace std;
class TimeMap {
public:
    TimeMap(){};

    void set(string key, string value, int timestamp) {
        timeMap[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp) {
        auto &pairs=timeMap[key];
        pair<int,string> p={timestamp,string({127})};
        auto i=upper_bound(pairs.begin(),pairs.end(),p);
        if(i!=pairs.begin()){
            return (i-1)->second;
        }
        return "";
    }
private:
    unordered_map<string,vector<pair<int,string>>> timeMap;    
};