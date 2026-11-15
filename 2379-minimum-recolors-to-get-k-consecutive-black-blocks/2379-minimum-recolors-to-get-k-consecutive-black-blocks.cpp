class Solution {
public:
    bool isB(char ch){
        return ch=='B';
    }
    int minimumRecolors(string blocks, int k) {
        int ans=0;
        int count=0;
        for(int i=0;i<k;i++){
            if(isB(blocks[i])){
                count++;
            }
            ans=abs(count-k);
        }
        for(int i=k;i<blocks.length();i++){
            if(isB(blocks[i-k])){
                count--;
            }
            if(isB(blocks[i])){
                count++;
            }
            ans=min(ans,abs(count-k));
        }
        return ans;
    }
};