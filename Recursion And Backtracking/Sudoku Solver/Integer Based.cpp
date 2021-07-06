#include <bits/stdc++.h>

using namespace std;
bool isSafe(int row,int col,int c,int board[9][9]){
        for(int i=0;i<9;i++){
            if(board[row][i]==c)
                return false;
            if(board[i][col]==c)
                return false;
            if(board[3*(row/3)+ i/3][3*(col/3)+i%3]==c)
                return false;
           
        }
         return true;
    }

 bool sudoku(int board[9][9]){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]==0){
                    for(int c=1;c<=9;c++){
                        if(isSafe(i,j,c,board)){
                            board[i][j]=c;
                            if(sudoku(board)) return true;
                            board[i][j]=0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
int main()
{
   int board[9][9];
   for(int i=0;i<9;i++){
       for(int j=0;j<9;j++){
           cin>>board[i][j];
       }
   }
   if(sudoku(board)){
   for(int i=0;i<9;i++){
       for(int j=0;j<9;j++){
          cout<<board[i][j]<<" ";
       }
       cout<<endl;
   }
   }
   

    return 0;
}

