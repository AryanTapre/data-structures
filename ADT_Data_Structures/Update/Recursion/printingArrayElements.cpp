// print elements in array recursively
#include<iostream>
using namespace std;
    
    void print(int i, int N, int arr[]) {
        if(i >= N) return;
             cout<<arr[i] <<" ";
        print(i+1,N,arr); 
    }

int main() {
    int arr[] = {10,20,30,40,50},i=0,N=5;
    print(i,N,arr);
return (0);
}