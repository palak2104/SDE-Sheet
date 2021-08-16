#include <bits/stdc++.h>

using namespace std;

int main()
{
   vector<pair<int,int>>inter;
   int n;
   cin>>n;
   pair<int,int>curr;
   for(int i=0;i<n;i++){
       int u,v;
       cin>>u>>v;
       if(i==0){
           curr={u,v};
       }
       inter.push_back({u,v});
   }
   sort(inter.begin(),inter.end());
   vector<pair<int,int>>result;
   for(auto it:inter){
       if(it.first>=curr.first && it.first<=curr.second){
           curr.second=max(curr.second,it.second);
       }
       else{
           result.push_back(curr);
           curr.first=it.first;
           curr.second=it.second;
       }
   }
   result.push_back(curr);
   cout<<endl;
   for(auto it:result){
       cout<<it.first<<" "<<it.second<<endl;
   }

    return 0;
}
