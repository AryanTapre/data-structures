#include<vector>
#include<iostream>
using namespace std;
 
    int partition(vector<int>& arr, int start, int end) {
        int pivotIndex = start;
        int count = 0;
        for(int i=start+1; i<=end; i++) {
            if(arr[i] <= arr[pivotIndex]) {
                count++;
            }
        }

        swap(arr[pivotIndex],arr[start+count]);
        pivotIndex = start+count;

        int i=start,j=end;
        while(i<pivotIndex && j>pivotIndex) {
            while(arr[i] <= arr[pivotIndex]) {
                i++;
            }
            while(arr[j] > arr[pivotIndex]){
                j--;
            }
            if(i<pivotIndex && j>pivotIndex){
                swap(arr[i],arr[j]);
            }
        }
        return pivotIndex;


    }

    // TC: O(N^2)
    void quickSort(vector<int>& arr, int start, int end) {
        // basecase:
        if(start >= end) return;
        

        int pindex = partition(arr,start,end);

        //left
        quickSort(arr,start,pindex-1);
        //right
        quickSort(arr,pindex+1,end);

    }

int main() {
 
    vector<int> arr = {5,8,10,15,23,46,7,7,7,7,12,25};
    int start = 0;
    int end = arr.size()-1;
    quickSort(arr,start,end);

    for(auto i : arr) {
        cout<<i<<" ";
    } cout<<endl;

return (0);
}