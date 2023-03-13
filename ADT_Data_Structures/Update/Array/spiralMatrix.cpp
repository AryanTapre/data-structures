#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int> > matrix) {
    vector<int> ans;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int total_elements = rows * cols;

    int startingRow = 0;
    int endingColumn = cols-1;
    int endingRow = rows-1;
    int startingColumn= 0;

    int count = 0;
    while(count < total_elements) {
        // printing starting row
        for(int i=startingColumn; i<=endingColumn && count<total_elements; i++) {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // printing ending column
        for(int i=startingRow; i<=endingRow && count<total_elements; i++) {
            ans.push_back(matrix[i][endingColumn]);
            count++;
        }
        endingColumn--;

        // printing ending row
        for(int i=endingColumn; i>=startingColumn && count<total_elements; i--) {
             ans.push_back(matrix[endingRow][i]);
             count++;
        }
        endingRow--;

        // printing starting column
        for(int i=endingRow; i>=startingRow && count<total_elements; i--) {
            ans.push_back(matrix[i][startingColumn]);
            count++;
        }
        startingColumn++;
    }
    return ans;
} 

int main() {

    vector<vector<int> > matrix;
    vector<int> a{1,2,3};
    vector<int> b{4,5,6};
    vector<int> c{7,8,9};
    vector<int> d{10,11,12};
    matrix.push_back(a);
    matrix.push_back(b);
    matrix.push_back(c);
    matrix.push_back(d);

    vector<int> ans = spiralMatrix(matrix);
    for(auto i : ans) {
        cout<<i <<" ";
    }
    cout << endl;

return (0);
}