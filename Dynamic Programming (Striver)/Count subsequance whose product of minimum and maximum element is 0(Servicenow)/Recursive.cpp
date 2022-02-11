#include <bits/stdc++.h>

using namespace std;
int func(int i,vector<int>&arr,int mini,int maxi){
    if(i==-1){
    if(maxi==0 || mini==0) return 1;
    return 0;
    }
    int left=func(i-1,arr,min(mini,arr[i]),max(maxi,arr[i]));
    int right=func(i-1,arr,mini,maxi);
    return left+right;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int maxi=INT_MAX;
    int mini=INT_MIN;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    maxi=min(maxi,arr[i]);
    mini=max(mini,arr[i]);
    }
    cout<<func(n-1,arr,mini,maxi);
    return 0;
}
