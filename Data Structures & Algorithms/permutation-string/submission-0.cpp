class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
        int left = 0;
        int right = s1.size() - 1;
        string s3 = "";
        while(right<s2.size()){
            for(int i=left; i<=right; i++){
                s3+=s2[i];
            }
            sort(s3.begin(), s3.end());
            if(s1==s3){
                return true;
            }
            else{
                left++;
                right++;
                s3.clear();
            }
        }
    return false;
    }
};
