#include<vector>
#include<iostream>
using namespace std;


    void printBoard(vector<vector<char>>& board) {
        for(auto &&i : board) {
            for(auto &&j : i) {
                cout<<j<<" ";
            }
            cout<<endl;
        } 
        cout<<"--------------"<<endl;
    }

    bool isSafe(vector<vector<char>>& board, int row, int column, int n) {
        int i = row;
        int j = column;

        //left row
        while(j >= 0) {
            if(board[i][j-1] == 'Q') {
                return false;
            }
            j--;
        }

        // left upper diagonal
        i = row;
        j = column;
        while(i>=0 && j>=0) {
            if(board[i][j] == 'Q') {
                return false;
            }
            i--;
            j--;
        }

        // right lower diagonal
        i = row;
        j = column;
        while(i<n && j>=0) {
            if(board[i][j] == 'Q') {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    void solve(vector<vector<char>>& board, int n, int column) {
        if(column >= n) { // baseCase:
            printBoard(board);
            return;
        }

        for(int row=0; row<n; row++) {
            if(isSafe(board,row,column,n)) {
                board[row][column] = 'Q';
                solve(board,n,column+1); //Recursive Calls
                // backTracking
                board[row][column] = '-';

            }
        }
    }
 
int main() {
    int n=8;
    vector<vector<char>> board(n,vector<char>(n,'-'));

    int column = 0;
    solve(board,n,column);
return (0);
}