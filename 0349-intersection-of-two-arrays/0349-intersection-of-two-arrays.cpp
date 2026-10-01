class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        vector<int>ans;
        for(int x:nums1){
            mp[x]=1;
        }
        for(int y:nums2){
            if(mp.find(y)!=mp.end()){
                ans.push_back(y);
                mp.erase(y);
            }
        }
        return ans;
    }
};