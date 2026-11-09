class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        // int mini=INT_MAX;
        // int maxi=INT_MIN;
        // double avg;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>maxi){
        //         maxi=nums[i];
        //     }
        //     if(nums[i]<mini){
        //         mini=nums[i];
        //     }
        //     avg=double(mini+maxi)/2;
        // }
        
        // return avg;
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        double ans=INT_MAX;
        while(left<right){
            double avg= (nums[left]+nums[right])/2.0;
            ans=min(ans,avg);
            left++,right--;
        }
        return ans;
    }
};