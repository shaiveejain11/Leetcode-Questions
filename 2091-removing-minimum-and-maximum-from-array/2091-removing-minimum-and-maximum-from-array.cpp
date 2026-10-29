class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
       
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int maxIndex=0;
        int minIndex=0;
        for(int i=0;i<n;i++){
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxIndex = i;
            }

            if (nums[i] < mini) {
                mini = nums[i];
                minIndex = i;                                                                                              
            }
        }
        int start=max(minIndex,maxIndex)+1;
        int end=n-min(minIndex,maxIndex);
        int both=min(minIndex,maxIndex)+1 + n-max(minIndex,maxIndex);
        return min({start,end,both});
    }
};