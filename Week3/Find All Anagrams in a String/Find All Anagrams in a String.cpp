class Solution {
public:
    vector<int> findAnagrams(string s, string p)
    {
        int counter[26] = {0} ;
        vector<int>ans ;
        int unique = 0 ;
        for(auto i : p )
        {
            if(counter[i-'a'] == 0 ) ++unique ;
            ++counter[i-'a'] ;
        }
        int start = 0 ;
        for(int i  = 0 ; i < s.size() ; i ++ )
        {
            if( counter[s[i]-'a'] != 0 )
            {
                --counter[s[i]-'a'] ;
                if(counter[s[i]-'a'] == 0)
                {
                    --unique;
                }
            }
            else
            {
               while( counter[ s[i] - 'a'] == 0 && start < i )
               {
                        if( counter[  s[start] - 'a' ]  == 0 )
                        {
                            ++unique ;
                        }
                   ++ counter[ s[start++] - 'a' ] ;
               }
                if(counter[ s[i] - 'a'] == 0 ) ++start ;
                else
                {
                           -- counter[ s[i] - 'a'] ;
                           --unique ;
                }
            }
            if(unique == 0 ){
                ans.push_back(start);
            }
        }
        return ans ;
    }
};
