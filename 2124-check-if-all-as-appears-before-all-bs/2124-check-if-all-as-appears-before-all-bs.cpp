class Solution {
public:
    bool checkString(string s) {
        int i=0;
        int n=s.length();
        while(i<n){
            if(s[i]=='b'){
                while(i<n){
                    if(s[i]=='a'){
                        return false;
                    }
                    i++;
                }
            }
            i++;
        }
        return true;
    }
};