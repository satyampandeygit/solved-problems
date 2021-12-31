class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> ans(n);
        
        int runSum=0;
        
        for(int i=0; i<n; i++)
        {
            runSum=nums[i]+runSum;
            ans[i]=runSum;
        }
        
        return ans;
    }
};