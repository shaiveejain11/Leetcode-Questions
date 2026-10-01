class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      map<int,int>mp;
      vector<int>ans;
      for(int x:nums1){
        mp[x]++;
      }  
      for(int y:nums2){
        if(mp.find(y)!=mp.end()){
            ans.push_back(y);
            mp[y]--;
            if(mp[y]==0) mp.erase(y);
        }
      }
      return ans;
    }
};