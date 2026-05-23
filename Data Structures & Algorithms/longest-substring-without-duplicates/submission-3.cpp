class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        unordered_set<char> myset;
        int max_size = 0;
        int j=0;
        int i=0;
        for(; i<s.size(); i++){
            if(myset.contains(s[i])){
                max_size = (max_size<count) ? count : max_size;
                count = 0;
                myset.clear();
                j++;
                i=j;
            }
            myset.insert(s[i]);
            count++;
        }

        return max(max_size, count);
    }
};
