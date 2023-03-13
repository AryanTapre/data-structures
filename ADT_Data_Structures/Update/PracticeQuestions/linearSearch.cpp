#include<vector>
#include<iostream>
using namespace std;

int linearSearch(vector<int> arr,int target) {
    for(int i=0;i<arr.size();i++) {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
 vector<int> arr{900,67,23,56,120,788};
 cout<<"search found at : "<<linearSearch(arr,788)<<endl;
return (0);
}