void merge(long long a[], long long b[], int n, int m) 
        { 
            // code here
            int i=0;
            while(i<=n-1){
            long long ele=b[0];
            int flag=0;
            for(int j=i;j<n;j++){
             if(a[j]>ele){
                 swap(a[j],b[0]);
                 flag=1;
                 break;
             }   
            }
            if(flag==0) break;
            ele=b[0];
            int j=1;
            while(b[j]<ele && j<m){
                b[j-1]=b[j];
                j++;
            }
            b[j-1]=ele;
            
            i++;
            }
        } 
