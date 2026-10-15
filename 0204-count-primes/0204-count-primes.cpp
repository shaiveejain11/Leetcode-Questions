class Solution {
public:
//  bool isPrime(int num){
//     if(num<2) return false;
//     for(int i=2;i*i<=num;i++){
//         if(num%i==0) return false;
//     }
//     return true;
// }
// int count=0;
//     int countPrimes(int n) {
//         for(int i=2;i<n;i++){
//             if(isPrime(i))
//             count++;
//         }
//         return count;

    int countPrimes(int n) {
        int count=0;
        vector<bool>isPrime(n+1,true);
        for(int i=2;i<n;i++){
            if(isPrime[i]){
                count++;
                for(int j=i*2;j<n;j=j+i){
                    isPrime[j]=false;
                }
            }
        }
        return count;
    }
};