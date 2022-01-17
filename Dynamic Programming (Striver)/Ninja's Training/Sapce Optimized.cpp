int ninjaTraining(int n, vector<vector<int>> &arr)
{
    // Write your code here.
    //vector<vector<int>>dp(n+1,vector<int>(4,-1));
    vector<int>temp;
    for(int i=0;i<3;i++){
        int maxi=0;
        for(int j=0;j<3;j++){
            if(i!=j){
                maxi=max(maxi,arr[0][j]);
            }
        }
        temp.push_back(maxi);
    }
    
    for(int day=1;day<n;day++){
    vector<int>temp2;
    for(int last=0;last<3;last++){
    int maxi=0;
    for(int i=0;i<3;i++){
    if(i!=last)
    maxi=max(maxi,arr[day][i]+temp[i]);  
    }
    temp2.push_back(maxi);
    }
    for(int i=0;i<3;i++)
    temp[i]=temp2[i];
    }
    int maxi=0;
    for(int i=0;i<3;i++){
      maxi=max(maxi,temp[i]);  
    }
    return maxi;
}
