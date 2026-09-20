class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
           int rev = 'z' - s[i] + 1;
            int index=i+1;
            ans += rev *index;
        }
        return ans;
    }
};