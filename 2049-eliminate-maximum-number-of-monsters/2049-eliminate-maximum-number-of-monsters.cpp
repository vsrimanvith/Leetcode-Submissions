//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<double>v;
        int cnt=0;
        for(int i=0;i<dist.size();i++)
        {
            v.push_back((double)dist[i]/speed[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<=i) break;
            cnt++;
        }
        return cnt;
    }
};