class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, i = 0;
        for (i = 1; i <= nums.size(); i++) {
            xor1 = xor1 ^ i;
        }
        for (i = 0; i < nums.size(); i++) {
            xor1 ^= nums[i];
        }

        return xor1;
    }
};