class Solution{
public:
  void Partition(int ind,int sum,int n,vector<int>&res,int arr[]){
      if(ind==n){
          res.push_back(sum);
          return;
      }
      Partition(ind+1,sum+arr[ind],n,res,arr);
      Partition(ind+1,sum,n,res,arr);
      return;
  }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        //cout<<sum/2<<endl;
        int h=sum/2;
        if(sum%2!=0) return 0;
        vector<int>res;
        Partition(0,0,N,res,arr);
       int count=0;
        for(int i=0;i<res.size();i++){
            if(res[i]==h) count++;
        }
        if(count==2) return true;
        return false;
    }
};
