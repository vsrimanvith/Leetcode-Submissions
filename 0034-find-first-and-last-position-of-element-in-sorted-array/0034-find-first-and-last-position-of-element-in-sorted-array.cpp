//Author: Sri Manvith Vaddeboyina

class Solution {
int lowbound(vector<int>& nums, int target)
{
    int l=0,r=nums.size()-1,lb=-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(target==nums[mid]){
                lb = mid;
                r = mid-1;
            }
            else if(target<nums[mid]) r=mid-1;
            else l=mid+1;
        }
        return lb;
}

int highbound(vector<int>& nums, int target)
{
    int l=0,r=nums.size()-1,hb=-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(target==nums[mid]){
                hb = mid;
                l = mid+1;
            }
            else if(target<nums[mid]) r=mid-1;
            else l=mid+1;
        }
        return hb;
}

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lower_bound = lowbound(nums,target);
        if(lower_bound == -1) return {-1,-1};
        int upper_bound = highbound(nums,target);
        return {lower_bound,upper_bound};
    }
};