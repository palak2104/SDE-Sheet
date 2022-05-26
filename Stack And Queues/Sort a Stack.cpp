#include<bits/stdc++.h>
void sortStack(stack<int> &st)
{
	// Write your code here
    if(st.size()==1) return;
    
    int a=st.top();
    st.pop();
    sortStack(st);
    vector<int>arr;
    while(st.size()>0){
        if(st.top()<=a) break;
        arr.push_back(st.top());
        st.pop();
    }
    st.push(a);
    for(int i=arr.size()-1;i>=0;i--){
        st.push(arr[i]);
    }
    return;
}
