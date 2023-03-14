// find maximum element in array..
#include<iostream>
#include<limits.h>
using namespace std;
 
    void max(int i, int N, int arr[], int& maxi) {
        if(i>=N) return ;
        
        if(arr[i] > maxi) maxi = arr[i];
        max(i+1,N,arr,maxi);
        
    }

int main() {
    int arr[] = {10,300,15,21,44,26,17};
    int i = 0, N = 7, maxi = INT_MIN;
    max(i,N,arr,maxi);
    cout<<maxi;
return (0);
}