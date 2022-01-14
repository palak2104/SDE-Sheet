int maximumNonAdjacentSum(vector<int> &arr){
    // Write your code here.
    int a=0;
    int b=arr[0];
    for(int i=1;i<arr.size();i++){
        int pick=arr[i]+a;
        int npick=b;
        a=b;
        b=max(pick,npick);
    }
    return b;
}
