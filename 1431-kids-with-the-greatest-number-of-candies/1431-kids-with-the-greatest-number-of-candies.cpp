class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx = *max_element(candies.begin(),candies.end());
        
        vector<bool> ans;
        
        int n = candies.size();
        
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies>=maxx){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};