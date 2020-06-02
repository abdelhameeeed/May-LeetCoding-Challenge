class Solution {
public:
    bool isPerfectSquare(int num)
    {
        long long  L = 1 , R = num ;
        long long  mid = 0  ;
        while(L<=R){
            mid = (double)L/2+(double)R/2;
            if(mid*mid > num )R = mid - 1 ;
            else if(mid * mid < num )L = mid + 1 ;
            else return true ;

        }
        return false ;
    }
};
