//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if((abs(nums[i]))<abs(closest)) closest=nums[i];
            else if((abs(nums[i]))==abs(closest))closest = closest>nums[i] ? closest : nums[i];
        }
        return closest;
    }
};