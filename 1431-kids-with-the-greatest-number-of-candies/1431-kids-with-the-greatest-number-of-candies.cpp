class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx = *max_element(candies.begin(),candies.end());
        
        vector<bool> ans;
        
        
        
        for(auto x: candies){
            if(x+extraCandies>=maxx){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};