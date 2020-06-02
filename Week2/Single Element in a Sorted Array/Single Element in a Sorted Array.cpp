class Solution {
public:
    int ans = 0 ;
    int singleNonDuplicate(vector<int>& nums) {
       int X = 0  ;
        for(auto i : nums ){
            X = X ^ i ;
        }
        return X ;
    }
};
