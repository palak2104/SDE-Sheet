#include <bits/stdc++.h>
using namespace std;
int chess[100][100];
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<chess[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return;
}

void TwoKnights(int n,int move,int i,int j){
    if(i<0 || j<0 || i>=n || j>=n || chess[i][j]>0){
        return;
    }
    if(move==(n*n)){
        chess[i][j]=move;
        print(n);
        chess[i][j]=0;
        return;
    }
    
    chess[i][j]=move;
    TwoKnights(n,move+1,i-2,j+1);
    TwoKnights(n,move+1,i-1,j+2);
    TwoKnights(n,move+1,i+1,j+2);
    TwoKnights(n,move+1,i+2,j+1);
    TwoKnights(n,move+1,i+2,j-1);
    TwoKnights(n,move+1,i+1,j-2);
    TwoKnights(n,move+1,i-1,j-2);
    TwoKnights(n,move+1,i-2,j-1);
    chess[i][j]=0;
    return;
}

int main()
{
    int n;
    cin>>n;
    int row,col;
    cin>>row>>col;
    //vector<vector<int>>chess(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            chess[i][j]=0;
        }
      
    }
    TwoKnights(n,1,row,col);
    
    return 0;
}
