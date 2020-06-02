class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freq((int)30);
        for(auto i :s){
            ++freq[i-'a'];
        }
        int ans=-1;
        for(int i = 0 ; i < s.size() ; i ++ ){
            if(freq[s[i]-'a'] == 1 ){ans = i ; break ;}
        }
        return ans;
    }
};
