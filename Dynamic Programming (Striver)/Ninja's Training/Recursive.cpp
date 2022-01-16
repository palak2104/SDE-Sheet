int func(int day,vector<vector<int>>&arr,vector<int>&dp,int last){
    if(day==0){
        int maxt=0;
        for(int i=0;i<3;i++){
        if(i!=last){
        int temp=arr[0][i];
        maxt=max(maxt,temp);
        }
        }
        return maxt;
    }
    int first=0;
    int second=0; 
    int third=0;
    
    if(last!=0)
    first=arr[day][0]+func(day-1,arr,dp,0);
    if(last!=1)
    second=arr[day][1]+func(day-1,arr,dp,1);
    if(last!=2)
    third=arr[day][2]+func(day-1,arr,dp,2);
    return max(first,max(second,third));
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<int>dp(n+1,-1);
    return func(n-1,points,dp,3);
}
