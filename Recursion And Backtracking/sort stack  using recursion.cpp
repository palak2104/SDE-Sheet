#include <bits/stdc++.h>

using namespace std;
void insertStack(int x, stack<int>&st){
    vector<int>arr;
    while(st.top()>x){
        arr.push_back(st.top());
        st.pop();
    }
    st.push(x);
    for(int i=arr.size()-1;i>=0;i--){
        st.push(arr[i]);
    }
}
void sortAStack(stack<int>&st){
    if(st.size()==1)
    return;
    int x=st.top();
    st.pop();
    sortAStack(st);
    insertStack(x,st);
}

int main()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    sortAStack(st);
    while(!st.empty()){
    	cout<<st.top()<<" ";
    	st.pop();
	}
    return 0;
}

