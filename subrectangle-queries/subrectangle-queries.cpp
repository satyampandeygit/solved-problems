class SubrectangleQueries {
public:
    
    int rows;
    int cols;
    
    vector<vector<int>> rectangle;
    
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        this->rows = rectangle.size();
        this->cols = rectangle[0].size();
        
        this->rectangle = rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        while(row1<=row2){
            
            int i=col1,j=col2;
            
            while(i<=j){
                this->rectangle[row1][i]=newValue;
                i++;
            }
            
            row1++;
        }
    }
    
    int getValue(int row, int col) {
        return this->rectangle[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */