/*
GFG: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Arrays&sortBy=submissions
TODO: Cyclically rotate an array by one
*/

#include<iostream>
using namespace std;
 
void rotate(int arr[], int n) {
    int x = arr[n-1];
    if(n > 1) {
        for(int i=n-2; i>=0; i--) {
            arr[i+1] = arr[i];
            if(i==0) {
                arr[i] = x;
            }
        }
    }
    
}

int main() {
 
    int arr[2] = {1,2};
    int n = 2;
    rotate(arr,n);
    for(auto i : arr) {
        cout<<i<<" ";
    }

return (0);
}