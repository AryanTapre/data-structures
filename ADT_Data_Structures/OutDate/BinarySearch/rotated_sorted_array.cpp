#include<iostream>
using namespace std;

int getPivot(int arr[],int size) {

    int start = 0,end = size-1;
    int mid = start + (end - start)/2;

    while(start < end) {

        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }

        mid = start + (end - start)/2;
    } 
    return (start);
}

int binarySearch(int arr[],int size,int key,int pivot) {

    int start = pivot, end = size;
    int mid = start + (end-start)/2;

    while(start <= end) {

        if(key == arr[mid]) {
            return (mid);
        }
        else if(key > arr[mid]) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return(-1);

}

int findPosition(int arr[],int size,int key) {

    int pivot = getPivot(arr,size);
    if(key >= pivot && key <= size-1) {
        return binarySearch(arr,size-1,key,pivot);
        // binary search in second line
    }
    else {
        return binarySearch(arr,pivot-1,key,0);
        // binary search in first line
    }
}


int main() {

    int arr[5] = {7,9,1,2,3};
    cout<<findPosition(arr,(sizeof(arr)/sizeof(int)),0);

    return (0);
}