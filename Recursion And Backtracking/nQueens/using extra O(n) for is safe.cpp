class Solution {
    bool isSafe(int rows,int cols,int n,vector<string>&res){
        int i,j;
        for(i=cols;i>=0;i--)
        if(res[rows][i]=='Q')
        return false;
        
        for(i=rows,j=cols;i>=0 && j>=0;i--,j--)
        if(res[i][j]=='Q')
        return false;
        
        for(i=rows,j=cols;i<n && j>=0;i++,j--)
        if(res[i][j]=='Q')
        return false;
    
    return true;
    }
    void nQueens(int cols,int n,vector<string>&res, vector<vector<string>>&fres){
        if(cols==n){
            fres.push_back(res);
            return;
        }
        for(int rows=0;rows<n;rows++){
          if(isSafe(rows,cols,n,res)){
              res[rows][cols]='Q';
              nQueens(cols+1,n,res,fres);
              res[rows][cols]='.';
          }  
        }
        return;
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>fres;
        vector<string>res(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            res[i]=s;
        }
        nQueens(0,n,res,fres);
        return fres;
    }
};
