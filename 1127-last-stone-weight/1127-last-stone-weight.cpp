//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>p(stones.begin(),stones.end());
        while(p.size()>1)
        {
            int x = p.top();
            p.pop();
            int y=p.top();
            p.pop();
            if(x>y) p.push(x-y);
        }
        return p.empty()?0:p.top();
    }
};