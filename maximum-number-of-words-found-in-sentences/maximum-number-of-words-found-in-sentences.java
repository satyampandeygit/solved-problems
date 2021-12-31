class Solution {
    public int mostWordsFound(String[] sentences) {
        int n= sentences.length;
        
        int currMax=0;
        
        for(int i=0; i<n; i++){
            String s=sentences[i];
            String[] newArray = s.split(" ");
            
            int currLength=newArray.length;
            
            if(currLength>currMax){
                currMax=currLength;
            }
        }
        
        return currMax;
    }
}