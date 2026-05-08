class Solution {
public:
    int maxArea(vector<int>& heights) {
        int largest_area = 0;
        for(int i=0; i<heights.size() - 1; i++){
            for(int j=i+1; j<heights.size(); j++){
                int current_area = (j - i) * min(heights[j],heights[i]);
                largest_area = max(largest_area,current_area);
            }
        }
        return largest_area;
    }
};
