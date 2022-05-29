class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
    for(int i=0;i<k;i++){
        pair<int,pair<int,int>>p;
        p.first=arr[i][0];
        p.second.first=i;
        p.second.second=0;
        pq.push(p);
    }
    vector<int>res;
    while(pq.size()!=0){
        auto it=pq.top();
        pq.pop();
        res.push_back(it.first);
        if(it.second.second<k-1){
        pair<int,pair<int,int>>p;
        p.first=arr[it.second.first][it.second.second+1];
        p.second.first=it.second.first;
        p.second.second=it.second.second+1;
        pq.push(p);
        }
    }
    return res;
    }
};
