class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            prod = 1;
            for(int j=0; j<nums.size(); j++){
                if(j==i){
                    continue;
                }
                else{
                    prod=prod * nums[j];
                }
            }
            res.push_back(prod);
        }
        return res;
    }
};
