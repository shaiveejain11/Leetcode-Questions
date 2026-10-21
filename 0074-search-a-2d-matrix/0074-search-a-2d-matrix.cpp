class Solution {
public:
    bool BinarySearchOnCol(vector<vector<int>>& mat, int target,int row){
        int n=mat[0].size();
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==mat[row][mid]){
                return true;
            }
            else if(target>mat[row][mid]){
                st=mid+1;
            }
            else end=mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        //binary search on rows
        int m=mat.size(),n=mat[0].size();
        int sr=0,er=m-1;
        while(sr<=er){
            int midr=sr+(er-sr)/2;
            if(target>=mat[midr][0] && target<=mat[midr][n-1]){
                return BinarySearchOnCol(mat,target,midr);
            }
            else if(target>=mat[midr][n-1]){
                //move right ie down
                sr=midr+1;
            }
            else {
                er=midr-1;
            }
        }
        return false;
    }
};