class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int countOfZeroes = 0;
        int countOfOnes = 0;
        int countOfTwos = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                countOfZeroes++;
            }else if(nums[i]==1){
                countOfOnes++;
            }else{
                countOfTwos++;
            }
        }
        
        int index = 0;
        while(countOfZeroes){
            nums[index] = 0;
            index++;
            countOfZeroes--;
        }
        
        while(countOfOnes){
            nums[index] = 1;
            index++;
            countOfOnes--;
        }
        
        while(countOfTwos){
            nums[index] = 2;
            index++;
            countOfTwos--;
        }
        
        return;
    }
};