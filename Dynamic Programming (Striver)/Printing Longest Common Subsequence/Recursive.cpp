#include <bits/stdc++.h>

using namespace std;
string func(int i,int j,string a,string b){
    if(i==-1 || j==-1)
    return "";
    
    if(a[i]==b[j]){
    string str="";
    str+=a[i];
    str+=func(i-1,j-1,a,b);
    return str;
    }
    string u=func(i-1,j,a,b);
    string v=func(i,j-1,a,b);
    if(u.length()>=v.length())
    return u;
    return v;
}
int main()
{
    string a,b;
    cin>>a>>b;
    string str=func(a.length()-1,b.length()-1,a,b);
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}
