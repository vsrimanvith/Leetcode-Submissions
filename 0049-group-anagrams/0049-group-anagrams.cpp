class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map<vector<int>,vector<string>>mp;
      for(string s: strs ){
        vector<int>v(26,0);
        for(int i=0;i<s.length();i++)
        {
            v[s[i]-'a']++;
        }
        mp[v].push_back(s);
      }
      vector<vector<string>>res;
      for(auto i:mp){
        res.push_back(i.second);
      }
      return res;
      
    }
};