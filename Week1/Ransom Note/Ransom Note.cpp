class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         unordered_map<char,int>vis;
        for(auto i : magazine ){
            ++vis[i];
        }
        for(auto i : ransomNote ){
            if(vis[i]) --vis[i];
            else{return 0;}
        }
        return 1;
    }
};
