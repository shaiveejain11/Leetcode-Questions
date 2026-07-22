class Solution {
public:
//brute force
    // vector<int> runningSum(vector<int>& nums) {
    //     vector<int>nums1;
    //     int num =0;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++){
    //             num+=nums[i];
    //             nums1.push_back(num);
    //         }    
    //     return nums1;
        
    
   //optimal soln
      vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            nums[i] = nums[i] + nums[i - 1];
        }
        return nums;



    }
};
