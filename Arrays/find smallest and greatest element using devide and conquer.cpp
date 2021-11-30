#include <bits/stdc++.h>

using namespace std;
void findMinMax(int low,int high,int &mini,int &maxi, int arr[]){
    if(low==high){
        if(mini>arr[low])
        mini=arr[low];
        if(maxi<arr[low])
        maxi=arr[low];
        return;
    }
    if(high-low==1){
        if(arr[low]<=arr[high]){
        if(mini>arr[low])
        mini=arr[low];
        if(maxi<arr[high])
        maxi=arr[high];    
        }
        if(arr[high]<=arr[low]){
        if(mini>arr[high])
        mini=arr[high];
        if(maxi<arr[low])
        maxi=arr[low];    
        }
        return;
    }
    int mid=(low+high)/2;
    findMinMax(low,mid,mini,maxi,arr);
    findMinMax(mid+1,high,mini,maxi,arr);
}
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    int maxi=INT_MIN;
    findMinMax(0,n-1,mini,maxi,arr);
    cout<<mini<<endl;
    cout<<maxi<<endl;

    return 0;
}
