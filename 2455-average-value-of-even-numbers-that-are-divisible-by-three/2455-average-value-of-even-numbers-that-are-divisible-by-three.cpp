class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int rou=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                sum+=nums[i];
                rou++;
            }
           
        }
        if(rou==0) return 0;
        else return sum/rou;
        
    }
};