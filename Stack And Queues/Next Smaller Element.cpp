#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int>hash(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        if(st.size()==0){
            hash[i]=-1;
            st.push(arr[i]);
        }
        else if(st.top()<arr[i]){
            hash[i]=st.top();
            st.push(arr[i]);
        }
        else{
            while(st.size()!=0){
                if(st.top()<arr[i]) break;
                st.pop();
            }
            if(st.size()==0) hash[i]=-1;
            else hash[i]=st.top();
            st.push(arr[i]);
        }
    }
    return hash;
}
