class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        unordered_set<int>s;
        int a,b;
        int n=grid.size();
        int actualSum=0;
        int expectedSum=0;
        expectedSum=(n*n)*(n*n+1)/2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualSum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                }
                s.insert(grid[i][j]);
            }
        }
        b=expectedSum+a-actualSum;
        ans.push_back(a);
        ans.push_back(b);
        return ans;

    }
};