class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<bool> visited(n, false);
        vector<vector<string>> result;

        for(int i = 0; i < n; i++) {
            if(visited[i]) continue; 

            vector<string> group;
            group.push_back(strs[i]);
            visited[i] = true;

            for(int j = i + 1; j < n; j++) {
                if(!visited[j] && isAnagram(strs[i], strs[j])) {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            result.push_back(group);
        }
        return result; 
    }

    bool isAnagram(string str1, string str2) {
        if(str1.length() != str2.length()) return false;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        return str1 == str2;
    }
};