#include<iostream>
#include<limits.h>
using namespace std;

int maxi(int arr[][3]) {
    int maxi = INT_MIN;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(arr[i][j] >  maxi) {
                maxi = arr[i][j];
            }
        }   
    }
    return maxi;  
} 
int mini(int arr[][3]) {

    int mini = INT_MAX;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(arr[i][j] < mini ) {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

int main() {

    int arr[3][3] = {{50,108,15},{16,5,0},{1,100,10}};
    cout<<"maximum element is :"<<maxi(arr)<<endl;
    cout<<"minimum element is :"<<mini(arr)<<endl;

return (0);
}