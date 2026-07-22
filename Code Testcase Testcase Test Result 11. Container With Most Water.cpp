class Solution {
public:
    int maxArea(vector<int>& height) {
        //brute
        // int n=height.size();
        // int maxwater=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int w=j-i;
        //         int h=min(height[i],height[j]);
        //         int area=h*w;
        //         maxwater=max(maxwater,area);
        //     }
        // }
        // return maxwater;

        //optimal
        int maxwater=0;
        int lp=0,rp=height.size()-1;
        while(lp<rp){
            int w=rp-lp;
            int ht= min(height[lp],height[rp]);
            int currwater =w*ht;
             maxwater=max(maxwater,currwater);
            height[lp]<height[rp] ? lp++ :rp-- ;
        }
         return maxwater;
    }
};
