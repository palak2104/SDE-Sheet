#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
       int mid=(low+high)/2;
       if(arr[mid]<k) low=mid+1;
       else if(arr[mid]>k) high=mid-1;
       else{
           ans=mid;
           high=mid-1;
       }
    }
    low=0;
    high=n-1;
    int ans2=-1;
    while(low<=high){
       int mid=(low+high)/2;
       if(arr[mid]<k) low=mid+1;
       else if(arr[mid]>k) high=mid-1;
       else{
           ans2=mid;
           low=mid+1;
       }
    }
    cout<<ans+1<<" "<<ans2+1;
    return 0;
}
