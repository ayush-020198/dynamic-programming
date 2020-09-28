#include <bits/stdc++.h>
using namespace std;

bool safelyplaced(vector<vector<int>> board, int i, int j, int n){
    for(int row=0; row<i ; row++){ //checking for same column
        if(board[row][j]==1){
            return false;
        }
    }
    int x=i, y=j;
    while(x>=0 && y>=0){ //checking for left diagonals
        if(board[x][y]==1) return false;
        x--; y--;
    }
    
    x=i, y=j;
    while(x>=0 && y<n){ //checking for right diagonals
        if(board[x][y]==1) return false;
        x--; y++;
    }
    
    return true;
}

bool solve(vector<vector<int>> board, int i, int n){
    if(i==n) {
        for(int row=0; row<n; row++){
            for(int col=0; col<n; col++){
                if(board[row][col]==0)
                    cout<<"0 ";
                else cout<<"Q ";
            }
            cout<<endl;
        }
        
        cout<<endl;
        return false; //done false to return all possible output. can be turned to true for printing the first one
    }
    
        for(int j=0; j<n; j++){
            if(safelyplaced(board, i, j, n)){ //to check whether the queen is placed safely for global i and local j
                board[i][j]=1;
                if(solve(board, i+1, n)) return true; //to go for the next row(concept of recusion)
            }            
            board[i][j]=0; //backtracking by making the value 0 again. 
        }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> board(n,vector<int> (n,0)); //Initialize board with 0
    solve(board,0,n);
}
