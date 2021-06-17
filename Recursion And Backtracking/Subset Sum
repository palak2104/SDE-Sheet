#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    void subset(int ind,int  sum,vector<int>arr,int n,vector<int>&res){
        if(ind==n){
            res.push_back(sum);
            return;
        }
        
        subset(ind+1,sum+arr[ind],arr,n,res);
        
        
        subset(ind+1,sum,arr,n,res);
    }
public:
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int>res;
        int  sum=0;
        subset(0,sum,arr,n,res);
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
