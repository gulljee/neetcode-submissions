class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> originals = strs; 
        
        for(int i=0; i<strs.size(); i++){
            sort(strs[i].begin(), strs[i].end());
        }
        
        vector<vector<string>> ans;
        vector<bool> visited(strs.size(), false); 
        
        for(int j=0; j<strs.size(); j++){
            if (visited[j]) continue; 
            
            vector<string> ans1;
            ans1.push_back(originals[j]); 
            visited[j] = true;
            
            for(int k=j+1; k<strs.size(); k++){ 
                if(!visited[k] && strs[j] == strs[k]){
                    ans1.push_back(originals[k]); 
                    visited[k] = true; 
                }
            }
            ans.push_back(ans1);
        }
        
        return ans; 
    }
};