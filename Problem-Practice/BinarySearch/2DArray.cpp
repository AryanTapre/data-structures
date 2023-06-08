/*
Search in 2D array..
Formula: total_column * row_index + column_index
row index: mid / col
col index: mid % col
*/

#include<iostream>
#include<vector>
using namespace std;

    //TC: O(Log N)
    //SC: O(1)
    int binarySearch(vector<vector<int>> v, int target,int rows, int cols) {
        int low=0;
        int high=(rows*cols)-1;

        while(low<=high) {

            int mid = low+(high-low)/2;
            int rowIndex = mid/cols;
            int colIndex = mid%cols;

            if(v[rowIndex][colIndex] == target) {
                return 1;
            }
            else if(v[rowIndex][colIndex] < target) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return -1;
    }
 
int main() {
 
    vector<vector<int>>v(3);
    v={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int target=1;
    int rows=3;
    int cols=3;

    cout<<binarySearch(v,target,rows,cols);
    

return (0);
}