class Solution{
    public:
        void merge(long long a[], long long b[], int n, int m) 
        { 
        int i=n-1,j=0;
            while(i>=0&&j<m){
                if(a[i]<b[j]){
                    break;
                    
                }
                else{
                    swap(a[i],b[j]);
                    i--;j++;
                    
                }
            }
            sort(a,a+n);
            sort(b,b+m);
        }
};
