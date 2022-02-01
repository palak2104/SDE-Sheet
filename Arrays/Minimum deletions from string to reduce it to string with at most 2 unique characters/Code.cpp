#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<char,int>m;
    string str;
    cin>>str;
    for(auto &it:str)
    m[it]++;
    int count=0;
    int mx=INT_MIN;
    int sm=INT_MIN;
    for(auto it:m){
    if(it.second>mx){
        sm=mx;
        mx=it.second;
    }
    count+=it.second;
    }
    cout<<count-mx-sm;
    return 0;
}
