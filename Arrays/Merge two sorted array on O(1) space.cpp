#include <bits/stdc++.h>

using namespace std;
void print(vector<int>&a,vector<int>&b){
    for(auto it:a)
   cout<<it<<" ";
   for(auto it:b)
   cout<<it<<" ";
   cout<<endl;
}
void merge(vector<int>&a,vector<int>&b){
    int i=0,j=0;
   while(i<a.size()){
       if(a[i]>b[j]){
           swap(a[i],b[j]);
           int ele=b[j];
           int k=1;
           while(b[k]<ele && k<b.size()){
               b[k-1]=b[k];
               k++;
           }
           b[k-1]=ele;
       }
       i++;
   }
}

int main()
{
   vector<int>a;
   vector<int>b;
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       a.push_back(x);
   }
   for(int i=0;i<m;i++){
       int x;
       cin>>x;
       b.push_back(x);
   }
   merge(a,b);
   print(a,b);

    return 0;
}
