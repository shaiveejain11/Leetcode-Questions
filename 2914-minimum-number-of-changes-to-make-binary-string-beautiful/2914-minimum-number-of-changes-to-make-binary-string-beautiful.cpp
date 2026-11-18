class Solution {
public:
    int minChanges(string s) {
        //only somem cases exected fail for this case-"11000111"
        // int low=0;
        // int high=s.length()-1;
        // int cl0=0;
        // int cl1=0;
        // int cr0=0;
        // int cr1=0;

        // int mid=low+(high-low)+1;
        // for(int i=0;i<mid;i++){
        //     if(s[i]=='0'){
        //         cl0++;
        //     }
        //     else cl1++;
        // }
        // for(int i=mid;i<high;i++){
        //     if(s[i]=='0'){
        //         cr0++;
        //     }
        //     else cr1++;
        // }
        // int a=min(cr0,cr1);
        // int b=min(cl1,cl0);
        // return a+b;
        
        int count=0;
        for(int i=0;i<s.length();i+=2){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        return count;
    }
};