//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch1=' ';
        for(int i=0;i<s.size();i++)
        {
            ch1^=s[i];
        }
        for(int i=0;i<t.size();i++)
        {
            ch1^=t[i];
        }
        return tolower(ch1);
    }
};