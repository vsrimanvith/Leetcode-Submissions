//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int left=0,right=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            right+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            right-=nums[i];
            v.push_back(abs(left-right));
            left+=nums[i];
        }
        return v;
    }
};