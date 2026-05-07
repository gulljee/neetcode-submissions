class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> myset(nums.begin(),nums.end());
        int longest_streak = 0;
        for(int n:nums){

            if(!myset.count(n-1)){
                int current_num = n;
                int current_streak = 1;
                while(myset.count(current_num+1)){
                    current_num++;
                    current_streak++;
                }
            longest_streak = max(longest_streak,current_streak);
            }
        }
        return longest_streak;
    }
};
