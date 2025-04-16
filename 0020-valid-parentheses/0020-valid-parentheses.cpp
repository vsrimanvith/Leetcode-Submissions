class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if (s[i]=='{' || s[i]=='(' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    if(s[i]=='}' && st.top()!='{') return false;
                    if(s[i]==')' && st.top()!='(') return false;
                    if(s[i]==']' && st.top()!='[') return false;
                    else{
                        st.pop();
                    }
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};