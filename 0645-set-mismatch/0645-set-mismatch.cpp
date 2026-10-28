class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int dup=-1,missing=-1;
       vector<int> freq(n + 1, 0);
        for(int x:nums){
            freq[x]++;
            for(int i=1;i<=n;i++){
                if(freq[i]==2) dup=i;
                if(freq[i]==0) missing=i;
            }
        }
       return{dup,missing}; 
    }
};