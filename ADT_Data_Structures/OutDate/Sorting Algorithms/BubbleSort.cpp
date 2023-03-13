#include<iostream>
using namespace std;

void bubbleSort(int *, int);

int main() {

    int arr[5] = {7,6,1,9,0};
    int n = sizeof(arr)/sizeof(int);
    
    bubbleSort(arr,n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    // cout <<n;


    return 0;
}
// void lovebabbar() {
//     int audible;
//     audible++;
//     cout<<audible;

// }
void bubbleSort(int *arr, int n) {

    for(int i=0; i<n-1; i++) {

        bool swapStatus = false;
        for(int j=0; j<n-i; j++) {

            if(arr[j] > arr[j+1]) {

                swap(arr[j],arr[j+1]);
                swapStatus = true;
            }
        }

        if(swapStatus == false)
            break;
    }

}


