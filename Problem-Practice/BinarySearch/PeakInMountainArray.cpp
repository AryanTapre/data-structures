/*
GFG: https://practice.geeksforgeeks.org/problems/peak-element/1
*/
#include<bits/stdc++.h>
using namespace std;

    int peakElement(int arr[], int n) {
        int low = 0;
        int high = n-1;

        while(low<high) {
            int mid = low+(high-low)/2;
            if(arr[mid-1]<arr[mid]>arr[mid+1]) {
                return mid;
            }
            else if(arr[mid]<arr[mid+1]) {
                // search right
                low=mid+1;
            }
            else {
                high=mid;
            }
        }
        return low;
    }
int main() {
 
    int arr[]={1,2,3,4,0};
    cout<<peakElement(arr,5)<<endl;

return (0);
}