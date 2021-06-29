class Solution
{
    public:
    string ans=to_string(INT_MIN);
    //Function to find the largest number after k swaps.
    /*string swapped(int i,int j,string str){
    string s="";
    s+=str.substr(0,i);
    s+=str[j];
    s+=str.substr(i+1,j-i-1);
    s+=str[i];
    s+=str.substr(j+1,str.length()-j);
    return s;
    }*/
    void Number(string str,int k){
        ans=max(str,ans);
        if(k==0)
        return;
        for(int i=0;i<str.length()-1;i++){
            for(int j=i+1;j<str.length();j++){
                if(str[i]<str[j]){
                swap(str[i],str[j]);
                  Number(str,k-1);
                  swap(str[i],str[j]);
                }
            }
        }
        return;
    }
    string findMaximumNum(string str, int k)
    {
       // code here.
       
       
       Number(str,k);
       //string s=to_string(ans);
       return ans;
    }
};
