class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0;
        int high=k;
        double sum=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
           sum+=nums[i];
        }
        double avg=sum/k;
        double res=avg;
        while(high<n){
            sum-=nums[low];
            low++;
            sum+=nums[high];
            high++;;
            avg=sum/k;
            res=max(res,avg);
        }
        return res;
    }
};