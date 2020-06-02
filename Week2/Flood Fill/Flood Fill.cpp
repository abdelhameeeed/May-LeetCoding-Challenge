class Solution {
public:
    int dx[4] = {0,1,-1,0 } ;
    int dy[4] = {1,0,0,-1}  ;
    int n , m ;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
           n = image.size() ;
           if(!n) return vector<vector<int>>{};
           m = image[0].size()      ;
           int J = image[sr][sc]    ;
           image[sr][sc] = newColor ;
           solve( image ,  sr ,  sc , J, newColor ) ;
        return image ;
    }
    void solve( vector<vector<int>>& image, int sr, int sc, int rkm , int newColor   )
    {
        for(int i = 0 ; i < 4 ; i ++ )
        {
            int to_x = dx[i] + sr ;
            int to_y = dy[i] + sc ;
            if( is_valid( to_x , to_y) && image[to_x][to_y] == rkm && rkm != newColor )
            {
                image[to_x][to_y] = newColor ;
                solve(  image , to_x , to_y , rkm , newColor ) ;
            }
        }
    }
    bool is_valid(int x  , int y ){
        return x>=0&&x<n&&y>=0&&y<m;
    }
};
