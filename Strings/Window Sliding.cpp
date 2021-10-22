#include <bits/stdc++.h>

using namespace std;
bool match(int x,int y,string t,string p){
    int j=0;
    for(int i=x;i<=y;i++){
        if(t[i]!=p[j]) return false;
        j++;
    }
    return true;
}
int main()
{
   string t;
   getline(cin,t);
   string p;
   cin>>p;
   string str;
   for(int  i=0;i<p.length();i++)
   str.push_back(t[i]);
   if(str==p) cout<<0<<" ";
   int j=0;
   for(int i=p.length();i<t.length();i++){
       j++;
    if(match(j,i,t,p)) cout<<j<<" ";
   }
    return 0;
}
