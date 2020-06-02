class StockSpanner {
public:
    vector < int > v  ;
    vector <int> ans  ;
    int ind1 , ind2 , k ;
    StockSpanner()
    {
         ind1 = 0 , ind2 = 0 , k = 0 ;
    }
    int next( int price )
    {
           if( !k )
           {
               ans.push_back( 1 )   ;
               v.push_back(price)   ;
               k = 1    ;
               return 1 ;
           }
        else
        {
            if( price < v[ ind1 ] )
            { ans.push_back( 1 ) ; v.push_back( price )
                ; ++ind1 ; ++ ind2
                    ; return 1 ; }
            else
            {

                 int U = ind1 ;
                 int J = 1    ;
                while( U >= 0 &&  v[ U ] <= price  )
                {
                     J += ans[U] ;
                     U -= ans[U] ;
                }
                ans.push_back ( J ) ;
                v.push_back(price)  ;
                ++ind1 ; ++ind2 ;
                return J ;
            }
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
