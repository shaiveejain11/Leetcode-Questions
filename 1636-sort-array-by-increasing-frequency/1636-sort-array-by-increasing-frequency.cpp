class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>v;
        for(auto x:mp){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end(),[](pair<int,int>a,pair<int,int>b){
        if(a.first!=b.first) return a.first<b.first;
        else return a.second>b.second;
    }
        );
        vector<int>ans;
        for(auto x:v){
            for(int i=0;i<x.first;i++){
               
                ans.push_back(x.second);
            }
        }
        return ans;
    }
};