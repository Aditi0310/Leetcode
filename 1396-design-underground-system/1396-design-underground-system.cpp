class UndergroundSystem {
public:
    map<int,pair<string,int>>store;
    map<pair<string,string>,vector<int>>get;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        store[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        
        string entryStation=store[id].first;
        int entryTime=store[id].second;
        get[{entryStation,stationName}].push_back(t-entryTime);
    }
    
    double getAverageTime(string startStation, string endStation) {
        
        double ans=0;
        vector<int>res=get[{startStation,endStation}];
        int ele=res.size();
        for(auto i:res)
            ans+=i;
        
        return ans/ele*1.0;
        
    }
};


/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */