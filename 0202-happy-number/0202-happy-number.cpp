class Solution {
public:
    bool isHappy(int n) {
        while(n/10>0){
            int s=0;
            while(n){
                s+=pow(n%10,2);
                n/=10;
            }
            n=s;
        }
        if(n==1 || n==7) return true;
        return false;
    }
};