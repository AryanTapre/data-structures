// Finding a pivot element in array
// pivot : an element that breaks monotonic series in array
// e.g [3,4,5,6,7,1,2] pivot is 7(after 7 monotonic breaks i.e increasing order)

#include<iostream>
#include<vector>
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

int main() {
    vector<int> arr{3,4,5,6,7,1,2};
    cout<<"pivot found at position : "<<pivotElement(arr) <<endl;
return (0);
}