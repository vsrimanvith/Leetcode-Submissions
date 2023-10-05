//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
     for(int i=0;i<sentences.size();i++)
     {
         int c=0;
         for(int j=0;j<sentences[i].length();j++)
         {
             if(sentences[i][j]==' ') c++;
         }
         if(c>maxi) maxi=c;
     }   
     return maxi+1;
    }
};