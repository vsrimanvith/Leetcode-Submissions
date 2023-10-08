//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector <string> ch = {".-","-...","-.-.","-..",".","..-.",
        "--.","....","..",".---","-.-",".-..","--","-.","---",
        ".--.","--.-",".-.","...","-","..-","...-",".--","-..-",
        "-.--","--.."};
        unordered_set<string> st;

        for(int i=0;i<words.size();i++)
        {
            string s="";
            for(int j=0;j<words[i].size();j++)
            {
                s+=ch[words[i][j]-'a'];
            }
            st.insert(s);
        }
        return st.size();
    }
};