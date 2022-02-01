class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
       unordered_map<ll,int> mp;
       
       ll count = 0;
       ll curr = 0; 
       for(int i=0; i<n; i++){
           curr += arr[i];
           if(curr==0) count++;
           if(mp[curr]) count += mp[curr];
           mp[curr]++;
       }
       
       return count;
    }
};
