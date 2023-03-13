#include<vector>
#include<iostream>
using namespace std;

int pivotElement(vector<int>& arr) {
    int _start_index = 0;
    int _end_index = arr.size()-1;
    int _mid_index = _start_index + (_end_index - _start_index)/2;

    while(_start_index <= _end_index) {
        if( _mid_index>=0 &&  arr[_mid_index] > arr[_mid_index-1] && arr[_mid_index]>arr[_mid_index+1]) {
            return _mid_index;
        }
        else if(_mid_index>=0 && arr[_mid_index]>arr[_mid_index-1] && arr[_mid_index]<arr[_mid_index+1]) {
            _start_index = _mid_index+1;
        }
        else if(_mid_index>=0 && arr[_mid_index]<arr[_mid_index+1] && arr[_mid_index]<arr[_mid_index-1]) {
            _end_index--;
        }
        _mid_index = _start_index + (_end_index - _start_index)/2;
    }
    return -1;
   
}

int binarySearch(vector<int> v ,int target,int start,int end) {
    int lowIndex = start, highIndex = end;
    int mid = lowIndex + (highIndex - lowIndex)/2;
    while(lowIndex <= highIndex) {
        if(v[mid] == target) {
            return mid;
        }
        else if(v[mid] < target) {
            lowIndex = mid+1;
        }
        else {
            highIndex = mid-1;
        }
        mid = lowIndex + (highIndex - lowIndex)/2;
    }
    
    return -1;
} 

int searchInRotatedSorted(vector<int>& nums,int target) {
    int pivot = pivotElement(nums);
    if(nums[0]<= target && nums[pivot]>target) {
        return binarySearch(nums,target,0,pivot);
    }
    else {
        return binarySearch(nums,target,pivot+1,nums.size()-1);
    }

}

int main() {
    vector<int> arr{4,5,6,7,0,1,2};
    cout<<"found at position : "<<searchInRotatedSorted(arr,1);
return (0);
}