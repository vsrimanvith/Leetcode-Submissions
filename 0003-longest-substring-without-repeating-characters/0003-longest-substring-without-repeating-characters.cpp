class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,maxi=0;
        unordered_map<char,int>mp;
        for(int r=0;r<s.length();r++)
        {
            if(mp.find(s[r])!=mp.end() && mp[s[r]]>=l)
            {
                l=mp[s[r]]+1;
            }
            mp[s[r]] = r;
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};