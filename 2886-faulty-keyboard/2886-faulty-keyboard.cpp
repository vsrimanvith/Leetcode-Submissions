//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    string finalString(string s) {
        string k="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='i'){
                reverse(k.begin(),k.end());
            }
            else k+=s[i];
        }
        return k;
    }
};