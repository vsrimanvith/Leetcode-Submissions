//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long long int s=0;
        if(x<0) return false;
        while(x>0)
        {
            int n = x%10;
            s=s*10+n;
            x=x/10;
        }
        return (s==num);
    }
};