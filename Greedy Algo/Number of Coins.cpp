class Solution{
public:
    vector<int> minPartition(int V)
    {
        // code here
        vector<int>coins{2000,500,200,100,50,20,10,5,2,1};
        vector<int>res;
	    for(int i=0;i<coins.size();i++){
	        while(V>=coins[i]){
	            V-=coins[i];
	            res.push_back(coins[i]);
	        }
	    }
	    return res;
    }
};
