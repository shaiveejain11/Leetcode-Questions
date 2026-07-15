class Solution {
public:
//1st soln:
    int singleNumber(vector<int>& nums) { 
    //    sort(nums.begin(),nums.end());
    //     for(int i=1;i<nums.size();i+=2)
    //     {
    //         if(nums[i]!=nums[i-1])
    //             return nums[i-1];
    //     }
    //     return nums[nums.size()-1];

//2nd soln:

    int ans=0;
    for(int val:nums){
        ans=ans^val;
    }
    return ans;
    }
};
