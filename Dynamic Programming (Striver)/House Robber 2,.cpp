long long int func(vector<int> &arr){
    // Write your code here.
    long long  a=0;
    long long  b=arr[0];
    for(int i=1;i<arr.size();i++){
        long long int pick=arr[i]+a;
        long long int npick=b;
        a=b;
        b=max(pick,npick);
    }
    return b;
}
long long int houseRobber(vector<int>&arr)
{
    // Write your code here.
    vector<int>temp1,temp2;
    if(arr.size()==1) return arr[0];
    for(int i=0;i<arr.size();i++){
        if(i!=0)
        temp1.push_back(arr[i]);
        if(i!=arr.size()-1)
        temp2.push_back(arr[i]);   
    }
    long long int ef=func(temp1);
    long long int el=func(temp2);
    return max(ef,el);
}
