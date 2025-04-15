class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>heap;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto i:mp){
            heap.push({i.second,i.first});
            if(heap.size()>k){
                heap.pop();
            }
        }
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
        
    }
};