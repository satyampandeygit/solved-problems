class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=0;
        int n = nums.size();
        int currSum=0;
        
        for(int i=0; i<n; i++){
            currSum+=nums[i];
            if(currSum<0){
                currSum=0;
            }
            
            if(currSum>maxSum){
                maxSum=currSum;
            }
        }
        if(maxSum==0){
            maxSum=*max_element(nums.begin(),nums.end());
        }
        return maxSum;
        
    }
};