class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> v;
        string s = s1 + " " + s2;
        stringstream ss(s);
        string t;
        unordered_map<string, int> mp;
        while (ss >> t) {
            mp[t]++;
        }
        for (auto i : mp) {
            if (i.second == 1) {
                v.push_back(i.first);
            }
        }
        return v;
    }
};