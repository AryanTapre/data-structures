#include<vector>
#include<iostream>
using namespace std;
 
void printWaveMatrix(vector<vector<int> > matrix) {
    bool flag = true;
    for(int j=0;j<matrix[j].size();j++) {
        if(flag) {
            for(int i=0;i<matrix.size();i++) {
                cout<<matrix[i][j]<<" ";
                flag = false;
            }
        }
        else {
            for(int i=matrix.size()-1;i>=0;i--) {
                cout<<matrix[i][j]<<" ";
                flag = true;
            }
        }
        
        
    }
}

int main() {
    
    vector<vector<int>> matrix;
    vector<int> a{1,2,3,4};
    vector<int> b{5,6,7,8};
    vector<int> c{9,10,11,12};

    matrix.push_back(a);
    matrix.push_back(b);
    matrix.push_back(c);

    printWaveMatrix(matrix);

return (0);
}