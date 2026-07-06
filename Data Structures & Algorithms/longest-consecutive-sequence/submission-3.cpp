class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; 

        sort(nums.begin(), nums.end());

        int max_length = 1;
        int cur_length = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1]) {
                continue;
            }
            
            if (nums[i] + 1 == nums[i+1]) {
                cur_length++;
            } else {
                max_length = max(max_length, cur_length);
                cur_length = 1;
            }
        } 
        
        return max(max_length, cur_length);
    }
};