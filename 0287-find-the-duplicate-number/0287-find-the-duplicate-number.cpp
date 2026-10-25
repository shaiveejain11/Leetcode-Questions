class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //o(n)

        unordered_set<int>s;
        for(int val:nums){
            if(s.find(val)!=s.end()){
                return val;
            }
            s.insert(val);
        }
        return -1;
 


    }
};