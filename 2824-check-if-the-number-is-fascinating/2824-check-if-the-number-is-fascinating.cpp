//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    bool isFascinating(int n) {
        string s = to_string(n)+to_string(2*n)+to_string(3*n);
        sort(s.begin(),s.end());
        if(s=="123456789") return true;
        return false;
    }
};