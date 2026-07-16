class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //brute force;
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;

        //optimal
        int n=nums.size();
        vector<int>ans(n);
        int i=0,j=n-1,k=n-1;
        while(i<=j){
        if (abs(nums[i])<abs(nums[j])){
            ans[k]=(nums[j]*nums[j]);
            j--;
            k--;
        }
        else{
            ans[k]=(nums[i]*nums[i]);
            i++;
            k--;
        }

      }
        return ans;
    }
};
