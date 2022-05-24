vector<int> ninjaAndSortedArrays(vector<int>& arr, vector<int>& brr, int m, int n) {
	// Write your code here.
     if(n==0){
            return arr;
        }
        if(m==0){
            for(int i=0;i<n;i++)
                arr[i]=brr[i];
            return arr;
        }
        for(int i=0;i<m;i++){
            if(arr[i]>brr[0]){
                swap(arr[i],brr[0]);
            }
            if(n==1) continue;
            int ele=brr[0];
            int j=1;
            while(brr[j]<ele && j<n){
                brr[j-1]=brr[j];
                j++;
            }
            brr[j-1]=ele;
        }
        int x=m;
        for(int i=0;i<n;i++){
            arr[x++]=brr[i];
        }
    return arr;
}
