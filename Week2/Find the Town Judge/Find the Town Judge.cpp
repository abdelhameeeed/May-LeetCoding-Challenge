class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        unordered_map<int,int>v;
        for(int i = 0 ; i < trust.size() ; i ++ ){
            v[  trust[i][1] ]++;
            --v[ trust[i][0] ] ;
        }
        for(int i = 1 ; i <= N ; i ++ )
        {
            if(v[i] == N-1) return i ;
        }
        return -1 ;
    }
};
