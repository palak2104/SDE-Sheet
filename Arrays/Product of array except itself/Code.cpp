vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
       
        //code here 
        vector<long long int>temp(1,1);
        if(n==1) return temp;
        vector<long long int>a(n);
        vector<long long int>b(n);
        a[0]=arr[0];
        for(int i=1;i<n;i++){
            a[i]=arr[i]*a[i-1];
        }
        b[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            b[i]=b[i+1]*arr[i];
        }
        arr[0]=b[1];
        arr[n-1]=a[n-2];
        for(int i=n-2;i>0;i--){
            arr[i]=a[i-1]*b[i+1];
        }
        return arr;
    }
};
