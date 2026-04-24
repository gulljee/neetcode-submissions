class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> myset;
        for(int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(myset.find(complement)!=myset.end()){
                return {myset[complement],i}; 
            }
            myset[nums[i]] = i;
        }
    }
};
