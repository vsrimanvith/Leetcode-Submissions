//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& persons) {
        vector<int> start, end;
        vector<int> res;
        for (int i=0;i<flowers.size();i++)
        {
            start.push_back(flowers[i][0]);
            end.push_back(flowers[i][1]);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        for (int t : persons) {
            int st = upper_bound(start.begin(), start.end(), t) - start.begin();
            int ed = lower_bound(end.begin(), end.end(), t) - end.begin();
            res.push_back(st - ed);
        }
        return res;
    }
};