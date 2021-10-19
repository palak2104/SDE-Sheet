//https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#
#include <bits/stdc++.h>

using namespace std;

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
   map<string,vector<string>>m;
   for(auto it:dict){
       string str=it;
       sort(str.begin(), str.end());
       m[str].push_back(it);
   }
   for(auto it:m){
       for(auto itr:it.second)
           cout<<itr<<" ";
           cout<<endl;
   }
    return 0;
}
