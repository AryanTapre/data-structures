// accessing element in 2d array: C*i+j,where C=column

#include<iostream>
using namespace std;
 
bool binarySearchIn2D(int a[][4],int rows,int cols,int target) {
    int start = 0;
    int end = (rows*cols)-1;
    int mid = start+(end-start)/2;

    while(start<=end) {
        int rowIndex = mid/cols;
        int colIndex = mid%cols;

        if(a[rowIndex][colIndex] == target) {
            return true;
        }
        else if (a[rowIndex][colIndex] < target) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return false;
}

int main() {
    int arr[4][4] {
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                  };
    if(binarySearchIn2D(arr,4,4,16)) {
        cout<<"Search Found!"<<endl;
    }
    else {
        cout<<"Search Not Found!"<<endl;
    }
                  

return (0);
}