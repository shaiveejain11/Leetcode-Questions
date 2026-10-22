class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //brute force

    //     for (int i = 0; i < nums.size(); i++) {
    //     for (int j = i + 1; j < nums.size(); j++) {
    //         if (nums[i] + nums[j] == target) {
    //             return {i, j};
    //         }
    //     }
    // }
    // return {};
   
    //optimal
            unordered_map<int,int>mp;
             vector<int>ans;
             for(int i=0;i<nums.size();i++){
                int first=nums[i];
                int sec=target-first;
                if(mp.find(sec)!=mp.end()){
                    ans.push_back(i);
                    ans.push_back(mp[sec]);
                    break;
                }
                mp[first]=i;
           }
            return ans;
        }
    };