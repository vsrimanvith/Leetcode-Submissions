class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<vector<int>> buckets(nums.size() + 1);
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (auto i : mp) {
            buckets[i.second].push_back(i.first);
        }
        vector<int> res;
        for (int i = buckets.size() - 1; i > 0; i--) {
            for (int j : buckets[i]) {
                res.push_back(j);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};