/*
TODO: implement merge sort using auxliary space..
*/

#include<iostream>
#include<vector>
using namespace std;
 
    void mergeHelper(vector<int>& arr, int start, int end) {
        // finding the mid
        int mid = start + (end-start)/2;
        
        // creating left and right array..
        int len1 = mid-start+1;
        int len2 = end-mid; 
        int *left = new int[len1];
        int *right = new int[len2];

        // copying elements to left and right array from main array i.e (arr)
        int k = start;
        for(int i=0; i<len1; i++) {
            left[i] = arr[k++];
        }

        k = mid + 1;
        for(int i=0; i<len2; i++) {
            right[i] = arr[k++];
        }

        // merge logic
        int leftIndex = 0;
        int rightIndex = 0;
        int mainArrayIndex = start;

        while(leftIndex<len1 && rightIndex<len2) {
            if(left[leftIndex] < right[rightIndex]) {
                arr[mainArrayIndex++] = left[leftIndex++];
            } else {
                arr[mainArrayIndex++] = right[rightIndex++];
            }
        }

        // copy logic for left array
        while(leftIndex < len1) {
            arr[mainArrayIndex++] = left[leftIndex++];
        }

        // copy logic for right array..
        while(rightIndex < len2) {
            arr[mainArrayIndex++] = right[rightIndex++];
        }        

    }

    // TC: 2^logN * N = O(NLogN)
    // SC : O(N)
    void mergeSort(vector<int>& arr, int start, int end) {
        // base case:
        if(start >= end) return;

        // finding mid
        int mid = start + (end-start)/2;

        // dividing into left part
        mergeSort(arr,start,mid);

        // dividing into right part
        mergeSort(arr,mid+1,end);

        // merging logic
        mergeHelper(arr,start,end);
    }

int main() {
 
    vector<int> arr = {2,2,2,0};
    int start = 0;
    int end = arr.size()-1;

    mergeSort(arr,start,end);

    for (auto &&i : arr)
    {
        cout<<i<<" ";
    } cout<<endl;
    

return (0);
}