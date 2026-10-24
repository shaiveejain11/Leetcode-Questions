//DFS

// class Solution {
// public:
//     void dfs(vector<vector<int>>&image,int i,int j,int oldColor,int color){
//         int m=image.size();
//         int n= image[0].size();
//         if(i<0||j<0||i>=m||j>=n)
//         return;
//         if(image[i][j]!=oldColor)
//         return;
//         image[i][j]=color;
//         dfs(image,i+1,j,oldColor,color);
//         dfs(image,i-1,j,oldColor,color);
//         dfs(image,i,j+1,oldColor,color);
//         dfs(image,i,j-1,oldColor,color);
//     }

//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int oldColor=image[sr][sc];
//         if(oldColor==color)
//         return image;
//         dfs(image,sr,sc,oldColor,color);
//         return image;
//     }
// };

//BFS

class Solution{
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n= image[0].size();
        int oldColor=image[sr][sc];
        if(oldColor==color)
        return image;

        queue<pair<int,int>>q;
        q.push({sr,sc});
        image[sr][sc]=color;
        
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};

        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            
            for(int k=0;k<4;k++){
                int ni=i+dx[k];
                int nj=j+dy[k];
                
                if(ni>=0&& nj>=0 && ni<m&nj<n&& image[ni][nj]==oldColor){
                    image[ni][nj]=color;
                    q.push({ni,nj});
                }
            }
        }
        return image;

   }
};
