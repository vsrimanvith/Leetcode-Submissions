class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        for(int i=0;i<word1.length();i++){
            res+=word1[i];
            if(i<word2.length()) res+=word2[i];
        }
        for(int i=word1.length();i<word2.length();i++)
        {
            res+=word2[i];
        }
        return res;
    }
};