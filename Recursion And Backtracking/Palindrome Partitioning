#include <bits/stdc++.h>

using namespace std;
 bool isPal(string s,int low,int high){
        while(low<=high){
            if(s[low]!=s[high])
                return false;
            low++; high--;
        }
        return true;
    }
void func(int ind,string s,vector<string>&res, vector<vector<string>>&fres){
        if(ind==s.length()){
            fres.push_back(res);
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(isPal(s,ind,i)){
                res.push_back(s.substr(ind,i-ind+1)); //This is because substr parametres are substr(the point from where we want to cut, length we want to cut)
                func(i+1,s,res,fres);
                res.pop_back();
            }
        }
        return;
    }

int main()
{
   string s;
   cin>>s;
   vector<string>res;
    vector<vector<string>>fres;
    func(0,s,res,fres);
    for(auto it:fres){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }   

    return 0;
}
