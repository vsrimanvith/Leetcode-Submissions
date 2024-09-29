class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s(nums1.begin(),nums1.end());
        vector<int>v;
        for(int i=0;i<nums2.size();i++)
        {
            if(s.find(nums2[i])!=s.end()){
                s.erase(nums2[i]);
                v.push_back(nums2[i]);
            }
        }
        return v;
    }
};