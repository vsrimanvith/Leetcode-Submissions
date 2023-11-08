//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    double trimMean(vector<int>& arr) {
        int len = 9*arr.size()/10;
        double sum=0;
        sort(arr.begin(), arr.end());

        for(int i=arr.size()/20;i<19*arr.size()/20;i++)
        {
            sum+=arr[i];
        }
        return sum/len;
    }
};