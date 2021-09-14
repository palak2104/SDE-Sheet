#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int getMin(string str){
        stack<char>st;
        for(int i=0;i<str.length();i++){
        if(str[i]>=97 && str[i]<=122) continue;
            if(st.size()==0)
                st.push(str[i]);
            else if(str[i]==')'&& st.top()=='(')
                st.pop();
            else  st.push(str[i]);
        }
        return st.size();
    }
    void validParenthesis(int mr,string str,set<string>&result){
        if(mr==0){
            //if(getMin(str)==0){
                //cout<<str<<" ";
                result.insert(str);
            //}
            return;
        }
        for(int i=0;i<str.length();i++){
        string a=str.substr(0,i);
        string b=str.substr(i+1,str.length()-1);
        if(getMin(a+b)==mr-1)
        validParenthesis(mr-1,a+b,result);  
        }
        return;
    }
    vector<string> removeInvalidParentheses(string s) {
       int mr=getMin(s); 
       //cout<<mr;
       set<string>result;
        validParenthesis(mr,s,result);
        vector<string>res;
       for(auto it:result){
           res.push_back(it);
       }
        return res;
    }
};

    
int main()
{
   int n;
   cin>>n;
   vector<string>dict;
   for(int i=0;i<n;i++){
     string s;
     cin>>s;
     dict.push_back(s);
   }
   string str;
   cin>>str;
   Solution ob;
   vector<string>res=ob.wordBreak(n,dict,str);
   if(res.size()==0)
   cout<<"empty";
   else{
       for(auto it:res)
       cout<<it<<endl;
   }
   

    return 0;
}
