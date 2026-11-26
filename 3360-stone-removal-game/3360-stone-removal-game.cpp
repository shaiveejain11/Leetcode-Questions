class Solution {
public:
    bool canAliceWin(int n) {
        int s=10;
        int count=0;
        if(n<s){
            return false;
        }
       while(n>=s){
        n=n-s;;
        s--;
        count++;
       }
       if(count%2!=0){
        return true;
       } 
       return false;
    }
};