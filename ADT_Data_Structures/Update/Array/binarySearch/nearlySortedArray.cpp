// search element in nearly sorted array using binary search..
// conditions:
// element can found at 
// 1) same mid _index
// 2) mid index-1
// 3) mid index+1

// Assume an sorted array, element at particular index in sorted array can be found in 
//nearly sorted array at index:same index,index-1 and index+1

#include<vector>
#include<iostream>
using namespace std;

int searchInNearlySortedArray(vector<int> arr,int target) {
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;

    while(start <= end) {
        if(arr[mid] == target) {
            return mid;
        }
        else if (mid-1>=start && arr[mid-1] == target) {
            return mid-1;
        }
        else if(mid+1 <= end && [mid+1] == target) {
            return mid+1;
        }
        else if (arr[mid] < target) {
            // right search
            start = mid+2;
        }
        else {
            // left search
            end = mid-2;
        }
        mid =  start + (end - start) /2;
    }
    return -1;
} 

int main() {

    vector<int> v{10,3,40,20,50,80,70};
    int target = 101;
    cout<<endl<<"Target found at : "<<searchInNearlySortedArray(v,target)<<endl;


return (0);
}