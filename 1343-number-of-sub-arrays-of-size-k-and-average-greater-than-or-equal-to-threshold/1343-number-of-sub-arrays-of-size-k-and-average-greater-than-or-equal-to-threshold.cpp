class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low=0;
        int high=k;
        int cnt=0;
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum>=threshold*k){
            cnt++;
        }
        while(high<n){
            sum-=arr[low];
            low++;
            sum+=arr[high];
            high++;
            if(sum>=threshold*k){
                cnt++;
            } 
        }
        return cnt;
    }
};