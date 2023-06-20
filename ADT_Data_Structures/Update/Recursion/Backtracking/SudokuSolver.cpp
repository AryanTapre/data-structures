/*
leetcode : 37
*/
#include<iostream>
#include<vector>
using namespace std;

    bool isSafe(int row, int col, int board[][9], int value) {
        int n = 9;
        for(int i=0; i<9; i++) {
            if(board[row][i] == value) { // checking for row..
                return false;
            }

            if(board[i][col] == value) { // checking for column.,
                return false;
            }

            if(board[ 3*(row/3)+(i/3) ][ 3*(col/3)+(i%3) ] == value) { // checking for 3*3 matrix..
                return false;
            }
        }
        return true;
    }

    bool solve(int board[][9]) {
        int n = 9;
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {

                if(board[i][j] == 0) { // checking that cell is empty/not?..

                    for(int value=1; value<=9; value++) { //trying to place all value from 1 to 9..

                        if(isSafe(i,j,board,value)) {

                            board[i][j] = value;
                            bool res = solve(board); //recursion call..

                            if(res) {
                                return true;
                            } else {
                                board[i][j] = 0; // backtracking..
                            }
                        }
                    }
                    return false; // if non of 9 values fit's into cell..
                }
            }
        }
        return true; // means all value are filled..
    }

int main() {
    
    int board[][9] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    solve(board);

    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}