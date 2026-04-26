class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = INT_MIN;
        for(int i=0; i<prices.size() - 1; i++){
            for(int j=i+1; j<prices.size(); j++){
                int curr_diff = prices[j] - prices[i];
                if(curr_diff>max_profit){
                    max_profit = curr_diff;
                }
            }
        }
        if(max_profit<0){
            return 0;
        }
        else{
            return max_profit;
        }
    }
};
