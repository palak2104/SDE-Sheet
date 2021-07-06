#include <bits/stdc++.h>

using namespace std;
class Solution{
    bool isPresent(int ind,int i,vector<string>& dict,string s){
        string str=s.substr(ind,i-ind+1);
        auto it=find(dict.begin(),dict.end(),str);
        if(it!=dict.end()) return true;
        return false;
    }
    void breakfunc(int ind,vector<string>& dict,string s,vector<string>&res,string str){
        if(ind==s.length()){
            str.pop_back();
            res.push_back(str);
            
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(isPresent(ind,i,dict,s)){
                
                 breakfunc(i+1,dict,s,res,str+s.substr(ind,i-ind+1)+" ");
                 
            }
        }
        return;
    }
public:
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        
        vector<string>res;
        
        string str="";
        breakfunc(0,dict,s,res,str);
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
