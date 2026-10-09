class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int dis1=0;
        int dis2=0;
        int ans=0;
        
        if(start<destination){
        for(int i=start;i<destination;i++){
            dis1+=distance[i];
        }
        }
        else if(start>destination){
            for(int i=destination;i<start;i++){
                dis1+=distance[i];
            }
        }
        for(int i=0;i<distance.size();i++){
            ans+=distance[i];
           
        }
         dis2=ans-dis1;
       
        return min(dis1,dis2);
    }
};