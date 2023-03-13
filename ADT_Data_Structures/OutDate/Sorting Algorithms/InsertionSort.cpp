#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {

    for(int i=0; i<n-1; i++) {

        if(arr[i+1] < arr[i]) {
            int j = i+1;
            int k = j;

            while(j > 0) {
                if(arr[k] < arr[j-1])
                {
                    j--;
                }
                else
                {
                    break;
                }
            } 

            while(k > j) {
                int buffer = arr[k];
                arr[k] = arr[k-1];
                arr[k-1] = buffer;
                k--;
            }
        }
    }

       for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[5] = {55,44,33,22,11};
    int n = sizeof(arr)/sizeof(int);

    insertionSort(arr,n);

 

    return 0;
}