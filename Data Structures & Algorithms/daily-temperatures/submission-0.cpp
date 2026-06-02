class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res;
        int left = 0;  
        int right = 0;
        
        while(left < temperatures.size()){
            right = left + 1; 
            
            while(right < temperatures.size() && temperatures[right] <= temperatures[left]){
                right++;
            }
            
            if (right < temperatures.size()) {
                res.push_back(right - left);
            } else {
                res.push_back(0);
            }
            
            left++;
        }
        return res;
    }
};