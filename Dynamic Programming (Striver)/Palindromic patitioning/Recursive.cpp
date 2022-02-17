class Solution{
bool isPalindrome(int i,int j,string str){
    while(i<j){
        if(str[i]!=str[j])
        return false;
        i++; j--;
    }
    return true;
}
    int func(int i,int j,string str){
        if(i>=j) return 0;
        
        
        if(isPalindrome(i,j,str)) return 0;
        
        int mini=INT_MAX;
        for(int k=i;k<j;k++){
            int count=1+func(i,k,str)+func(k+1,j,str);
            mini=min(mini,count);
        }
        return mini;
    }
public:
    int palindromicPartition(string str)
    {
        // code here
        int n=str.length();
        return func(0,n-1,str);
    }
};
