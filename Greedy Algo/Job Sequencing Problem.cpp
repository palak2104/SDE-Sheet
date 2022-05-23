class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<pair<int,pair<int,int>>>j;
        int d=INT_MIN;
        for(int i=0;i<n;i++){
          pair<int,pair<int,int>>p;
          p.first=arr[i].profit;
          p.second.first=arr[i].dead;
          p.second.second=arr[i].id;
          d=max(d,arr[i].dead);
          j.push_back(p);
        }
        sort(j.begin(),j.end());
        reverse(j.begin(),j.end());
        vector<int>hash(d+1,-1);
        int count=0;
        int profit=0;
        for(auto it:j){
            int deadline=it.second.first;
            while(hash[deadline]!=-1 && deadline>0){
                deadline--;
            }
            if(deadline>0){
                hash[deadline]=it.second.second;
                count++;
                profit+=it.first;
            }
        }
        vector<int>res(2);
        res[0]=count;
        res[1]=profit;
        return res;
    } 
};
