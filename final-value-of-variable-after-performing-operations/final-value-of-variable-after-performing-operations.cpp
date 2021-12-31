class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        
        for(int i=0; i<operations.size(); i++){
            
            char first = operations[i][0];
            
            if(first=='X'){
                
                char second = operations[i][1];
                if(second =='+'){
                    x++;
                }else{
                    x--;
                }
                
            }else if(first=='-'){
                x--;
            }else {
                x++;
            }
                
        }
        return x;
    }
};