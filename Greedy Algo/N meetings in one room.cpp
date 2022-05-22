class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,pair<int,int>>>arr;
        for(int i=0;i<n;i++){
           pair<int,pair<int,int>>p;
           p.first=end[i];
           p.second.first=start[i];
           p.second.second=i+1;
           arr.push_back(p);
        }
        sort(arr.begin(),arr.end());
        int count=0;
        int e=0;
        for(auto it:arr){
            if(it.second.first>e){
                count++;
                e=it.first;
            }
        }
        return count;
    }
};
