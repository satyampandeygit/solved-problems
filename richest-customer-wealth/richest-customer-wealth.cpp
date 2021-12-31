class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        
        for(int i=0; i<accounts.size(); i++){
            int currSum=0;
            
            for(int j=0; j<accounts[0].size(); j++){
                currSum=currSum+accounts[i][j];
            }
            
            if(currSum>maxWealth){
                maxWealth=currSum;
            }
        }
        
        return maxWealth;
    }
};