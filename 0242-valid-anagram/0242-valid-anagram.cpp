class Solution {
public:
    bool isAnagram(string s, string t) {
        //brute force

        // if(s.length()!=t.length()){
        //     return false;
        // }
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t){
        //     return true;
        // }
        // return false;

        //optimal

    if(s.length()!=t.length()){
        return false;
    }
    int freq[26]={0};
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<t.length();i++){
        freq[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;

    }
};