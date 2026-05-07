class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string str : strs){
            res += str + '\n';        
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string res1 = "";
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '\n'){
                res.push_back(res1);
                res1 = "";           
            } else {
                res1 += s[i];
            }
        }
        return res;
    }
};