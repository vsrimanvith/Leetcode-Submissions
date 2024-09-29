class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_ele = *max_element(candies.begin(), candies.end());
        vector<bool>v;
        for(auto i:candies){
            v.push_back((i+extraCandies)>=max_ele);
        }
        return v;
    }
};