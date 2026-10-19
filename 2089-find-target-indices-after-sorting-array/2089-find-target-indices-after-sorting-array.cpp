class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        int count=0;
        for(int i:nums){
            if(i<target){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans.push_back(count);
                count++;
            }
        }
        return ans;
    }
};