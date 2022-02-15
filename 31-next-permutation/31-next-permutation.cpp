class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int firstStepIndex=-1;
        int secondStepIndex=-1;
        
        int n = nums.size();
        
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                firstStepIndex=i;
                break;
            }
        }
        
        if(firstStepIndex<0){
           reverse(nums.begin(),nums.end());
        }else{
            for(int i=n-1; i>firstStepIndex; i--){
                if(nums[i]>nums[firstStepIndex]){
                    secondStepIndex=i;
                    break;
                }
            }
            
            swap(nums[firstStepIndex],nums[secondStepIndex]);
            reverse(nums.begin()+firstStepIndex+1,nums.end());
        }
    }
};