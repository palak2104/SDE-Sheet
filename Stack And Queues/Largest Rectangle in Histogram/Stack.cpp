class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
      int n=arr.size();
      vector<int>left(n);  
      vector<int>right(n);  
      stack<pair<int,int>>st;
      for(int i=n-1;i>=0;i--){
        if(st.size()==0){
            right[i]=n;
            st.push({arr[i],i});
        }
        else if(st.top().first<arr[i]){
            right[i]=st.top().second;
            st.push({arr[i],i});
        }
        else{
            while(st.size()!=0){
                if(st.top().first<arr[i]) break;
                st.pop();
            }
            if(st.size()==0) right[i]=n;
            else right[i]=st.top().second;
            st.push({arr[i],i});
        }
    }
    while(st.size()!=0){
        st.pop();
    }
    for(int i=0;i<n;i++){
        if(st.size()==0){
            left[i]=-1;
            st.push({arr[i],i});
        }
        else if(st.top().first<arr[i]){
            left[i]=st.top().second;
            st.push({arr[i],i});
        }
        else{
            while(st.size()!=0){
                if(st.top().first<arr[i]) break;
                st.pop();
            }
            if(st.size()==0) left[i]=-1;
            else left[i]=st.top().second;
            st.push({arr[i],i});
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
    ans=max(ans, arr[i]*(right[i]-left[i]-1));
    }
    return ans;   
    }
};
