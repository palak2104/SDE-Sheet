class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k==1)
            return 0;
        int mid= pow(2,n-1)/2;
        if(k>mid){
            return 1-kthGrammar(n-1,k-mid);
        }
        else{
           return kthGrammar(n-1,k); 
        }
        
    }
};

  
