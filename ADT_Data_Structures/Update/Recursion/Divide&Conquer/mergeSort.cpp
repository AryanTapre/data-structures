#include<iostream>
using namespace std;
 

    void merge(int * arr, int s, int e) {
         int mid =  (s+e)/2;

         int len1 = mid - s + 1;
         int len2 = e - mid;

            // creating arrays for len1,len2
         int *left = new int [len1];
         int *right = new int [len2];

         // copy values
         int k = s;
         for(int i=0; i<len1; i++) {
            left[i] = arr[k];
            k++;
         }    

         k = mid+1;
         for(int i=0; i<len2; i++) {
            right[i] = arr[k];
            k++;
         }


         //merge logic
         int leftIndex = 0;
         int rightIndex = 0;
         int mainArrayIndex = s;

         while(leftIndex < len1 && rightIndex < len2) {
            if(left[leftIndex] < right[rightIndex]) {
                arr[mainArrayIndex] = left[leftIndex];
                mainArrayIndex++;
                leftIndex++;
            }
            else {
                arr[mainArrayIndex] = right[rightIndex];
                mainArrayIndex++;
                rightIndex++;
            }
         }

         // copy left array if remain
         while(leftIndex < len1) {
            arr[mainArrayIndex++] = left[leftIndex++];
         }

         // copy right array if remain
         while(rightIndex < len2){
            arr[mainArrayIndex++] = right[rightIndex++];
         }

        delete left,right;

    
    }


    void mergeSort(int * arr,int s, int e) {
        if(s >= e) return;
        int mid = (s + e)/2;

        // divide left part
        mergeSort(arr,s,mid);
        // divide right part
        mergeSort(arr,mid+1,e);

        // merge left and right sorted array..
        merge(arr,s,e);
    }


int main() {
 
    int arr [] ={7,3,2,16,24,4,11,9};
    int n = 8;
    int s = 0;
    int e = n-1;
    mergeSort(arr,s,e);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

return (0);
}