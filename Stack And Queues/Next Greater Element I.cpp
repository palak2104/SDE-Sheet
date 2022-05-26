class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& arr, vector<int>& brr) {
        int n=arr.size(), m=brr.size();
        vector<int>hash(10001);
        stack<int>st;
        for(int i=m-1;i>=0;i--){
            if(st.size()==0){
                st.push(brr[i]);
                hash[brr[i]]=-1;
            }
            else {
            while(st.size()>0){
            if(st.top()>brr[i]) break;
            st.pop();
            }
            if(st.size()==0) hash[brr[i]]=-1;
            else hash[brr[i]]=st.top();
            st.push(brr[i]);
         }
        }
        for(int i=0;i<n;i++){
            arr[i]=hash[arr[i]];
        }
        return arr;
    }
};
