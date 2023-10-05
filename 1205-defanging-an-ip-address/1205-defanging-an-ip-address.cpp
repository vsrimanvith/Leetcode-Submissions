// Author: Sri Manvith Vaddeboyina

class Solution {
public:
    string defangIPaddr(string address) {
        // Replace with another string

        string ans;
        for(int i=0;i<address.size();i++){
            if(address[i] == '.'){
                ans+="[.]";
            }
            else{
                ans+=address[i];
            }
        }
        return ans;
    }
};