#include <bits/stdc++.h>

using namespace std;
int mindif=INT_MAX;
string ans;
string print(vector<int>arr){
    string a;
    a+='[';
    for(int i=0;i<arr.size();i++){
        a+=to_string(arr[i]);
        if(i<arr.size()-1) a+=',';
    }
    a+=']';
    return a;
}
void TugOfWar(vector<int>&arr,int ind,vector<int>&set1,vector<int>&set2,int sleft,int sright){
    if(ind==arr.size()){
        if(abs(sleft-sright)<mindif){
            mindif=abs(sleft-sright);
            ans="";
            ans+=print(set1);
            ans+=" ";
            ans+=print(set2);
        }
        return;
    }
    if(set1.size()<(arr.size()+1)/2){
        set1.push_back(arr[ind]);
        TugOfWar(arr,ind+1,set1,set2,sleft+arr[ind],sright);
        set1.pop_back();
    }
    if(set2.size()<(arr.size()+1)/2){
        set2.push_back(arr[ind]);
        TugOfWar(arr,ind+1,set1,set2,sleft,sright+arr[ind]);
        set2.pop_back();
    }
    return;
}

int main()
{
   int n;
   cin>>n;
   vector<int>arr;
   for(int i=0;i<n;i++){
       int num;
       cin>>num;
       arr.push_back(num);
   }
   vector<int>set1;
   vector<int>set2;
   TugOfWar(arr,0,set1,set2,0,0);
   cout<<ans;

    return 0;
}

