class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        //Brute force is O(N^2) don't do it. Use maps for O(N)
        
        //Approach 1
        map<int, int> mp;
        int gp = 0;

        for (int i = 0; i < nums.size(); i++) 
        {
            if (mp.find(nums[i]) != mp.end()) 
            {
                gp += mp[nums[i]];
                mp[nums[i]]++;
            } 
            else 
            {
                mp[nums[i]] = 1;
            }
        }
        return gp;
    }
};