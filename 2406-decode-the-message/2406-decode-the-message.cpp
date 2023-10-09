//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        char s='a';
        string str="";
        for(int i=0;i<key.size();i++)
        {
            if(key[i]==' ') continue;
            if(mp.find(key[i])==mp.end())
            {
                mp[key[i]] = s;
                s=char(s+1);   
            }
        }
        for(int i=0;i<message.size();i++)
        {
            if(message[i]==' ') str+=' ';
            else str+=mp[message[i]];
        }
        return str;
    }
};