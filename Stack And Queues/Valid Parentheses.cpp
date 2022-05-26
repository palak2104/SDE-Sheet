class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
       int n=s.length();
        st.push(s[0]);
       for(int i=1;i<n;i++){
        if(st.size()==0) st.push(s[i]);
        else if((s[i]==')' && st.top()=='(')||(s[i]=='}' && st.top()=='{')||(s[i]==']' && st.top()=='[')){
               st.pop();
           }
           else st.push(s[i]);
       }
       return (st.size()==0);
    }
};
