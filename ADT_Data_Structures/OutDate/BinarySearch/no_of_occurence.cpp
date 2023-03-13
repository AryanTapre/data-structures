#include<iostream>
using namespace std;

class Solution {

    public:
        int firstOccurence(int *, int, int);
        int lastOccurence(int *, int, int);
};

int Solution :: firstOccurence(int *arr, int size, int key) {

    int first= -1,mid;
    int start = 0 , end = size-1;
    mid = start + (end - start)/2;

    while(start <= end) {

        if(key == arr[mid]) {
            first = mid;
            end = mid-1;
        }
        else if (key > arr[mid]) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }

    return (first);

}

int Solution :: lastOccurence(int *arr, int size, int key) {

    int second = -1,mid;
    int start = 0, end = size-1;
    mid = start + (end - start)/2;

    while(start <= end) {

        if(key == arr[mid]) {
            second = mid;
            start = mid+1;
        }
        else if(key > arr[mid]) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }     
    return (second);

}

int main() {

    int arr[7] = {1,2,3,3,3,3,5};
    Solution sol;

    int f = sol.firstOccurence(arr,(sizeof(arr)/sizeof(int)),3);
    int l = sol.lastOccurence(arr,(sizeof(arr)/sizeof(int)),3);

    int result = (l-f)+1;

    cout<<endl<<"The total no of occurence is : "<<result;
 
    return (0);
}