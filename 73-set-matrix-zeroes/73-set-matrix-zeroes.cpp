class Solution {
public:
    set<int> row,col;
    
    void setRowToZero(vector<vector<int>>& matrix, int m,int row,int col){
        while(col<m){
            matrix[row][col]=0;
            col++;
        }
    }
    
    void setColumnToZero(vector<vector<int>>& matrix, int n,int row,int col){
        while(row<n){
            matrix[row][col]=0;
            row++;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        for(auto x: row){
            setRowToZero(matrix,m,x,0);
        }
        
        for(auto x: col){
            setColumnToZero(matrix,n,0,x);
        }
    }
};