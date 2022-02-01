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
    for(auto it:m){
    if(it.second>1)
    count+=it.second-1;
    }
    cout<<count;
    return 0;
}
