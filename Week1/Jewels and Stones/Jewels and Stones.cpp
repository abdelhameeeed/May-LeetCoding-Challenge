class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,bool>vis;
        int ans =0;
        for(auto i : J)vis[i]=1;
        for(auto i :S){
            if(vis[i])++ans;
        }
        return ans ;
    }
};
