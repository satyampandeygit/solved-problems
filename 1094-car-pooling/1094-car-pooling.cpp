class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        int passengers[1001];
        
        for(int i=0; i<1001; i++){
            passengers[i]=0;
        }
        
        for(auto trip: trips){
            passengers[trip[1]]=passengers[trip[1]]+trip[0];
            passengers[trip[2]]=passengers[trip[2]]-trip[0];
        }
        
        int carLoad=0;
        for(int i=0; i<1001; i++){
            carLoad = carLoad + passengers[i];
            
            if(carLoad>capacity){
                return false;
            }
        }
        
        return true;
        
    }
};