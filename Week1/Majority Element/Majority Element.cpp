class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>v;
        for(auto i : nums) ++v[i];
        int ans;
        for(auto i : nums){
            if(v[i]>nums.size()/2){
                ans = i ;
                break ;
            }
        }
        return ans ;
    }
};
