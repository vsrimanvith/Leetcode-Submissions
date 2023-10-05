//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Boyers Moore Voting Algorithm

        int l = INT_MIN;
        int r = INT_MIN;
        int cx=0;
        int cy = 0;
        int n = 3;
        vector<int>v;

        for(int i=0;i<nums.size();i++)
        {
            if(l==nums[i]) cx++;
            else if(r==nums[i]) cy++;
            else if(cx == 0) {
                l=nums[i];
                cx=1;
            }
            else if(cy == 0) {
                r=nums[i];
                cy=1;
            }
            else{
                cx--;
                cy--;
            }
        }

        cx=0;
        cy=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==l) cx++;
            if(nums[i]==r) cy++;
        }

        if(cx>(nums.size()/n)) v.push_back(l);
        if(cy>(nums.size()/n)) v.push_back(r);
        return v;
    }
};