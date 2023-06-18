/*
    RAT IN A MAZE
*/

#include<vector>
#include<iostream>
using namespace std;

    int xDirection[4] = {1,0,0,-1};
    int yDirection[4] = {0,-1,1,0};
    char directionValue[4] = {'D','L','R','U'};

    bool isSafe(int i, int j, int row, int col, vector<vector<int>>& maze, vector<vector<bool> > visited) {
        /* 1) valid index
           2) path avaliable
           3) visited or not?
        */

       // valid index
       if((i>=0 && i<row) && (j>=0 && j<col)) {
            if(maze[i][j] == 1) {
                if(visited[i][j] == false) {
                    return true;
                }
            }
       }
       return false;
    }


    void solveMaze(vector<vector<int>>& maze, int row, int col, int i, int j, vector<vector<bool>>& visited, vector<string>& path, string output) {
        // basecase:
        if(i == row-1 && j == col-1) {
            path.push_back(output);
            return;
        }

        for(int k=0; k<4; k++) {

            int newX = i+xDirection[k];
            int newY = j+yDirection[k];
            char dir = directionValue[k];

            if(isSafe(newX,newY,row,col,maze,visited)) {
                     visited[newX][newY] = true;
                     solveMaze(maze,row,col,newX,newY,visited,path,output+dir);
                     // BACKTRACKING
                     visited[newX][newY] = false;
            }
        }
 
        // // down (i+1,j)
        // if(isSafe(i+1,j,row,col,maze,visited)) {
        //     visited[i+1][j] = true;
        //     solveMaze(maze,row,col,i+1,j,visited,path,output+'D');

        //     // backtracking
        //     visited[i+1][j] = false;
        // }

        // // left (i,j-1)
        // if(isSafe(i,j-1,row,col,maze,visited)) {
        //     visited[i][j-1] = true;
        //     solveMaze(maze,row,col,i,j-1,visited,path,output+'L');

        //     // backtracking
        //     visited[i][j-1] = false;
        // }
       

        // //right (i,j+1)
        // if(isSafe(i,j+1,row,col,maze,visited)) {
        //     visited[i][j+1] = true;
        //     solveMaze(maze,row,col,i,j+1,visited,path,output+'R');

        //     // backtracking
        //     visited[i][j+1] = false;
        // }

        // // up (i-1,j)
        // if(isSafe(i-1,j,row,col,maze,visited)) {
        //     visited[i-1][j] = true;
        //     solveMaze(maze,row,col,i-1,j,visited,path,output+'U');

        //     // backtracking
        //     visited[i-1][j] = false;
        // }

    }

int main() {
 
    vector<vector<int>> maze;
    maze = {
            {1,0,0},
            {1,1,0},
            {1,1,1}
    };
    
    int row = 3;
    int col = 3; 

    vector<vector<bool> > visited(row,vector<bool>(col,false));
    visited[0][0] = true;
    vector<string> path;
    string output;

    // Edge Case 1
    if(maze[0][0] == 0 || maze[row-1][col-1] == 0) {
        cout<<" no path exists.";
        exit(0);
    }

    solveMaze(maze,row,col,0,0,visited,path,output);

    // Edge case 2
    if(path.empty()) {
        cout<<" no path exists.";
        exit(0);
    }

    for(auto i : path) {
        cout<<i<<" ";
    }

return (0);
}