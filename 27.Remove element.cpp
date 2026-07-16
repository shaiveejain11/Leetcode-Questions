class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        int c=0;
        while(i<n){
            if(nums[i]!=val){
                nums[c]=nums[i];
               c++; 
            }
            i++;
        }
        return c;
    }
};
