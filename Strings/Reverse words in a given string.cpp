class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        int n=s.length();
        string res;
        string a="";
        for(int i=n-1;i>=0;i--){
            if(s[i]=='.'){
                reverse(a.begin(),a.end());
                res+=a;
                res+='.';
                a="";
            }
            else{
                a+=s[i];
            }
            
        }
        reverse(a.begin(),a.end());
        res+=a;
        //res.pop_back();
        return res;
    } 
};
