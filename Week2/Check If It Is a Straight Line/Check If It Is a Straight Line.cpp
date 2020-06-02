class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        if(!coordinates.size()) return false ;
         int x1 =    coordinates[0][0] ;
         int y1 = coordinates[0][1]    ;
         double check = 0.0 ;
        for( int i = 1 ; i <coordinates.size()  ; i ++ )
        {
              if( i == 1 )
              {
                  check = (double)( coordinates[i][1] - y1 ) / (coordinates[i][0] - x1 ) ;
              }
            else
            {
                  if(check !=(double)( coordinates[i][1] - y1 ) / (coordinates[i][0] - x1 ) ) return false ;
            }
        }
        return true ;
    }
};
