#include <bits/stdc++.h>
using namespace std;
struct TupleHash{
    template<typename T>
    static void hash_combine(size_t& seed,const T& v){
        seed^=hash<T>{}(v)+0x9e3779b9+(seed<<6)+(seed>>2);
    }
    size_t operator()(const tuple<int,int,int>& t) const{
        auto& [a,b,c]=t;
        size_t seed=0;
        hash_combine(seed,a);
        hash_combine(seed,b);
        hash_combine(seed,c);
        return seed;
    }
};
class Router {
    int memory_limit;
    queue<tuple<int,int,int>> packet_q;
    unordered_set<tuple<int,int,int>,TupleHash> packet_set;
    unordered_map<int,deque<int>> dest_to_timestamps;
public:
    Router(int memoryLimit){
    memory_limit=memoryLimit;
    };
    
    bool addPacket(int source, int destination, int timestamp) {
        auto packet=tuple(source,destination,timestamp);
        if(!packet_set.insert(packet).second){
            return false;
        }
        if(packet_q.size()==memory_limit){
            forwardPacket();
        }
        packet_q.push(packet);
        dest_to_timestamps[destination].push_back(timestamp);
        return true;
    }
    
    vector<int> forwardPacket() {
        if(packet_q.empty()){
            return {};
        }
        auto packet=packet_q.front();
        packet_q.pop();
        packet_set.erase(packet);
        auto[source,destination,timestamp]=packet;
        dest_to_timestamps[destination].pop_front();
        return {source,destination,timestamp};
    }
    
    int getCount(int destination, int startTime, int endTime) {
        auto& timestamps=dest_to_timestamps[destination];
        auto left=ranges::lower_bound(timestamps,startTime);
        auto right=ranges::upper_bound(timestamps,endTime);
        return right-left;
    }
};