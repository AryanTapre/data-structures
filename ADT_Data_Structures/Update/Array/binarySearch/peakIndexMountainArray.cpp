// Finding peak index in mountain array..
#include<vector>
#include<iostream>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start=0,end=arr.size()-1;
    int mid = start+(end-start)/2;

    while(start<end) {
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
            return mid;
        }
        else if (arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) {
            start = mid+1;
        }
        else {
            end--;
        }
        mid = start + (end - start)/2;
    }   
    return -1;
}
int main() {
    vector<int> arr{10,40,60,90,100,79,50,20};
    cout<<"peak found at index : "<<peakIndexInMountainArray(arr)<<endl;
    return 0;
}