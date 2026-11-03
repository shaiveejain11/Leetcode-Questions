class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
         int cnt=0;
        int maximum=INT_MIN;
        for(int i=0;i<n;i++){
            maximum=max(maximum,nums[i]);
        }
        for(int i=0;i<n;i++){
            cnt+=abs(nums[i]-maximum);
        }
        return cnt;
    }
};