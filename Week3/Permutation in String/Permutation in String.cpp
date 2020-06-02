class Solution {
public:
    unordered_map<int,int>v ;
    unordered_map<int,int>v1;
    bool checkInclusion(string s1, string s2) {
        for(auto i : s1 )
        {
            ++v[i-'a'];
        }
        int n = s1.size() ;
        int m = s2.size() ;
        if( n > m || (!n && !m)) return 0 ;
        string k = "" ;
        for(int i = 0 ; i < n ; i ++ )
        {
            ++v1[s2[i]-'a'];
            k += s2[i] ;
        }
        int L = 0 , R = n - 1 ;
        while( 1 )
        {
                 if(solve()) return 1 ;
                 --v1[s2[L]-'a'];
                 ++L ;
                 if( R + 1 < m )
                 {
                     ++R ;
                     ++v1[ s2[ R ] - 'a' ] ;
                 }
            else{break ; }
        }
        return 0 ;
    }
    bool solve()
    {
        for(int i = 0 ; i < 26 ; i ++ ){
            if(v[i] != v1[i] ) return 0 ;
        }
        return 1 ;
    }
};
