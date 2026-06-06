class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars;
        
        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], (double)(target - position[i]) / speed[i]});
        }
        
        sort(cars.rbegin(), cars.rend());
        
        int count = 0;
        double maxTime = 0.0;
        
        for (int i = 0; i < n; i++) {
            if (cars[i].second > maxTime) {
                maxTime = cars[i].second;
                count++;
            }
        }
        
        return count;
    }
};