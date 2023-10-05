// Author: Sri Manvith Vaddeboyina

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // create a map and check if found and increment.
        map<char,int>mp;
        int c=0;
        for(int i=0;i<jewels.size();i++)
        {
            mp[jewels[i]]=0;
        }
        for(int i=0;i<stones.size();i++)
        {
            if(mp.find(stones[i])!=mp.end())
                c++;
        }
        return c;
    }
};