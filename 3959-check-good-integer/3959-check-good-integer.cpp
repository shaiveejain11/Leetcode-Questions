class Solution {
public:
    bool checkGoodInteger(int n) {
       long long sum=0,sum2=0;
        while(n>0){
            int dig=n%10;
            sum+=dig;
            sum2+=(dig*dig);
            n/=10;
        }
        if(sum2-sum>=50){
        return true;
        }
        return false;
    }
};