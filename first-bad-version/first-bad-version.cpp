// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long i=0,j=n;
        
        while(i<j){
            long long m= (i+j)/2;
            
            bool isBad = isBadVersion(m);
            
            if(!isBad){
                i=m+1;
            }else if(isBad){
                j=m;
            }
        }
        
        return j;
    }
};