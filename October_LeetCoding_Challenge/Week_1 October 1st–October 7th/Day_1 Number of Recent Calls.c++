class RecentCounter {
public: 
    int requests_done = 0;
    vector <int> request;    
    
    RecentCounter() {
        requests_done = 0;
    }
    
    int ping(int t) {
        RecentCounter();
        request.push_back(t);
        int upper = t;
        int lower = t - 3000;
        
        auto upper_it = lower_bound (request.begin(), request.end(), upper);
        auto lower_it = lower_bound (request.begin(), request.end(), lower);
        
        requests_done = distance (request.begin(), upper_it) - distance(request.begin(), lower_it) + 1; 
        
        /*for (int i = 0 ; i < request.size() ; i++)
        {
            if (request[i] > upper) return requests_done;
            
            if (request[i]>= lower && request[i] <= upper)
                requests_done++;
        }*/
        
        return requests_done;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */