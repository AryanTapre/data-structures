// find minimum element in array..
#include<iostream>
#include<limits.h>
using namespace std;
 
    void max(int i, int N, int arr[], int& mini) {
        if(i>=N) return ;
        
        if(arr[i] < mini) mini = arr[i];
        max(i+1,N,arr,mini);
        
    }

int main() {
    int arr[] = {10,300,15,21,44,26,17,0};
    int i = 0, N = 8, mini = INT_MAX;
    max(i,N,arr,mini);
    cout<<mini;
return (0);
}