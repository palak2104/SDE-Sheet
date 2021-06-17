#include <bits/stdc++.h>

using namespace std;
void combinationSum(int ind,int target,int arr[],vector<int>&res,int n){
    if(target==0){
        for(auto it:res)
        cout<<it<<" ";
        cout<<endl;
        return;
    }
    for(int i=ind;i<n;i++){
        if(i>ind && arr[i]==arr[i-1]) continue;
        if(target<arr[i])break;
        res.push_back(arr[i]);
        combinationSum(i+1,target-arr[i],arr,res,n);
        res.pop_back();
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+10];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int target;
    cin>>target;
    vector<int>res;
    combinationSum(0,target,arr,res,n);

    return 0;
}
