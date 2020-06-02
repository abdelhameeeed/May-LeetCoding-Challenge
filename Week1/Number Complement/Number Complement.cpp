class Solution {
public:
    int  findComplement(int num)
    {
        long long J =   (long long) 1 << solve( num )   ;
        --J ;
        return ( num ^ J )  ;
    }

    long long  solve(int num)
    {
        long long  x = 0 ;
        do
        {
            ++x;
            num/=2;
        }
        while( num!=0 );
        return x ;
    }
};

