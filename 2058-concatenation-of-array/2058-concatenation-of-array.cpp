// Author: Sri Manvith Vaddeboyina

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //Loop from n to 2*n (just duplication)

        int n = nums.size();
        for(int i = n; i < 2*n; i++)
        {
            nums.push_back(nums[i%n]);
        }
        return nums;
    }
};