// Reversing an array..
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int>& arr) {
    int start = 0;
    int end  = arr.size()-1;
    while(start < end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return arr;
}

int main() {
 vector<int> arr{2,7,5,9};
 cout<<"reverse is:"<<endl;
 vector<int> v = reverseArray(arr);
 for(auto i : v) {
    cout<<i <<" ";
 }
 
return (0);
}