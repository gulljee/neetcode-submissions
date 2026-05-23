class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> myset;
        int max_size = 0;
        int j = 0; 
        
        for (int i = 0; i < s.size(); i++) {
            while (myset.contains(s[i])) {
                myset.erase(s[j]);
                j++;
            }
            
            myset.insert(s[i]);
            
            max_size = (max_size < (i - j + 1)) ? (i - j + 1) : max_size;
        }
        
        return max_size;
    }
};