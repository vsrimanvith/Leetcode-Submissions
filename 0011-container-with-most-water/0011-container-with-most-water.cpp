class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=-1;
        int l=0,r=height.size()-1;
        while(l<r){
            int water=1;
            water=min(height[l], height[r])*(r-l);
            maxi=max(maxi, water);
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxi;

    }
};