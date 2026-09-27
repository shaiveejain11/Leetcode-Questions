class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        //pass for some test case

        // int n=nums.size();
        // int low=0;
        // int high=n-1;
        // if(n==1) return true;
        // while(low<high){
        //     int mid=low+(high-low)/2;
        //     if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1]){
        //         return true;
        //     }
        //     low++;
        //     high--;
        // }
        // return false;

        int n=nums.size();
        if(n==1)return n;
        int mid=n/2;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[mid]==nums[i]){
                count++;
            }
        }
        if(count>=2) return false;
        else return true;
    }
};