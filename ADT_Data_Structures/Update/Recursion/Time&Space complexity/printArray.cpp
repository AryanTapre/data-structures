#include<iostream>
using namespace std;
 
    void printArray(int a[], int n) {
        if(n == 0) return;
        cout<<*a<<" ";

        printArray(a+1, n-1); 
    }

int main() {
 
    int n = 5;
    int arr[] = {1,2,3,4,5};
    printArray(arr, n);

return (0);
}