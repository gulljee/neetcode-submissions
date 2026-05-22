class MinStack {
public:
    // Store pairs: {value, minimum_so_far}
    vector<pair<int, int>> myarr;
    
    MinStack() {
        // No need to manually track topnum; vector handles its own size
    }
    
    void push(int val) {
        if (myarr.empty()) {
            myarr.push_back({val, val});
        } else {
            // The new min is the lesser of the current val and the previous min
            int current_min = ::min(val, myarr.back().second);
            myarr.push_back({val, current_min});
        }
    }
    
    void pop() {
        if (!myarr.empty()) {
            myarr.pop_back();
        }
    }
    
    int top() {
        return myarr.back().first;
    }
    
    int getMin() {
        return myarr.back().second;
    }
};