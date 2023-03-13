#include<iostream>
using namespace std;

void transpose(int arr[][3],int transposeArr[][3]) {

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            transposeArr[j][i] = arr[i][j];
        }
    }
}

void printArray(int t[][3]) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
 }


int main() {
    
    int arr[3][3]= {
        {2,4,6},
        {1,3,5},
        {3,11,13}
    };
    cout<<endl;
    int transposeArr[3][3];
    transpose(arr,transposeArr);
    printArray(transposeArr);   

    
return (0);
}