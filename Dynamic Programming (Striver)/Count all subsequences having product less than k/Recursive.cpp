#include <bits/stdc++.h>

using namespace std;
int func(int ind,vector<int>&arr,int prod,int k){
    if(ind==-1){
    return prod<k;
    }
    int left=func(ind-1,arr,prod*arr[ind],k);
    int right=func(ind-1,arr,prod,k);
    return left+right;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    int res=func(n-1,arr,1,k);
    if(k>1)
    cout<<res-1;
    else cout<<res;
    return 0;
}
