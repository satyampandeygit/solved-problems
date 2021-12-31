class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0,j=n;
        
        vector<int> ans(2*n);
        
        for(int k=0; k<2*n; k++){
            if(k%2==0){
                // put x values
                ans[k]=nums[i];
                i++;
            }else{
                // put y values
                ans[k]=nums[j];
                j++;
            }
        }
        
        return ans;
    }
};