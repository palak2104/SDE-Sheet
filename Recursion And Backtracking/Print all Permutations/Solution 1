#include <bits/stdc++.h>

using namespace std;
void Permutation(int m[],vector<int>&res,int arr[],int n){
    if(res.size()==n){
        for(auto it:res)
        cout<<it<<" ";
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(m[i]==0){
            res.push_back(arr[i]);
            m[i]=1;
            Permutation(m,res,arr,n);
            m[i]=0;
            res.pop_back();
        }
    }
    return;
}

int main()
{
   int n;
   cin>>n;
   int arr[n+1];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   int m[n]={0};
   vector<int>res;
   Permutation(m,res,arr,n);
       
   

    return 0;
}
