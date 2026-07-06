class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freqMap1;
        unordered_map<char,int> freqMap2;
        
        for(int i=0; i<s.length(); i++){
            freqMap1[s[i]]++;
        }
        for(int j=0; j<t.length(); j++){
            freqMap2[t[j]]++;
        }
        return freqMap1 == freqMap2;
    }
};
