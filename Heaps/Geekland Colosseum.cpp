//Problem Link: https://practice.geeksforgeeks.org/contest/job-a-thon-exclusive-hiring-challenge-for-amazon-alexa/problems/#
class Solution {
public:
    long long colosseum(int N,vector<int>arr) {
    long long sum=0;
    int n=arr.size()/3;
    priority_queue<int,vector<int>,greater<int>>minh;
    priority_queue<int>maxh;
    vector<long long>a,b;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        minh.push(arr[i]);
    }
    a.push_back(sum);
    for(int i=n;i<arr.size()-n;i++){
        int x=minh.top();
        if(arr[i]>x){
            minh.pop();
            minh.push(arr[i]);
            sum-=x;
            sum+=arr[i];
        }
    a.push_back(sum);
    }
    sum=0;
    for(int i=arr.size()-1;i>=arr.size()-n;i--){
        sum+=arr[i];
        maxh.push(arr[i]);
    }
    b.push_back(sum);
    for(int i=arr.size()-n-1;i>=n;i--){
        int x=maxh.top();
        if(arr[i]<x){
            maxh.pop();
            maxh.push(arr[i]);
            sum-=x;
            sum+=arr[i];
        }
    b.push_back(sum);
    }
    reverse(b.begin(),b.end());
    long long res=INT_MIN;
    for(int i=0;i<a.size();i++){
        res=max(res,a[i]-b[i]);
    }
    return res;
   }
};
