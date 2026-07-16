class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int, int> mp;
        // int n = nums.size();

        // for (int num : nums) {
        //     mp[num]++;

        //     if (mp[num] > n / 2)
        //         return num;
        // }
        // return -1;


        //brute force
        // int n = nums.size();
        // for(int val:nums){
        //     int freq=0;
        //     for(int el:nums){
        //         if(el==val){
        //             freq++;
        //         }
        //     }
        //     if(freq>n/2)
        //     return val;
        // }
        // return -1;

        //optimal
       int n = nums.size();
       sort(nums.begin(),nums.end());
       int freq=1;
       int ans=nums[0];
       for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else freq=1,ans=nums[i];
        
       if(freq>n/2){
        return ans;  
       }  
    }
    return ans;
    }
};
