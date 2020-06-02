// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int L = 1 , R = n ;
        int ans = 0 ;
        while(L<=R)
        {

            int mid = ( double ) L / 2 + ( double ) R / 2 ;


            if( isBadVersion (mid) )
            {
                ans = mid ;
                R = mid - 1 ;
            }
            else
            {
                L=mid+1;
            }
        }
        return ans ;
    }
};
