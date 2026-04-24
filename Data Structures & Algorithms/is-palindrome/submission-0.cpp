class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for(int i=0; i<s.length(); i++){
            if(isalnum(s[i])){
                s2+=tolower(s[i]);
            }
            
        }
        int left = 0;
        int right = s2.length() - 1;
        while(left < right){
            if(s2[left]!=s2[right]){
                return false;
            }
            left++;
            right--;
        }
    return true;
    }
};
