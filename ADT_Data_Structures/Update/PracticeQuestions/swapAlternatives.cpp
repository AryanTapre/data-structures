// swap alternative elements in array
// {1,2,3,4,5,6,7}
// swap(1,2) , swap(3,4),swap(5,6) no swap for 7(as it is alone)..

#include<vector>
#include<iostream>
using namespace std;
 
vector<int> swapAlternatives(vector<int>& arr) {
    int i=0;
    while(i+1 <= arr.size()-1) {
        swap(arr[i],arr[i+1]);
        i+=2;
    }
    return arr;
}

int main() {
 
    vector<int> arr{1,2,3,4,5};
    vector<int> v = swapAlternatives(arr);
    cout<<"after swap alternatives : "<<endl;
    for(auto i : v) {
        cout<<i<<" ";
    }

return (0);
}