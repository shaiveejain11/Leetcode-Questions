class Solution {
public:
    bool canAliceWin(int n) {
        int s=10;
        int count=0;
       while(n>=s){
        n=n-s;;
        s--;
        count++;
       }
     return count%2!=0;
    }
};