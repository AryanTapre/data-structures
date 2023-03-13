#include<vector>
#include<iostream>
using namespace std;

vector<int> sort01(vector<int>& arr) {
    int i=0,j=arr.size()-1;
    while(i<j) {
       while(arr[i] == 0 && i<j) {
        i++;
       }
       while(arr[j] == 1 && i<j) {
        j--;
       }
       if(i<j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
       }
    }
    return arr;
}
 
int main() {
 vector<int> arr{1,0,0};
 vector<int> ans = sort01(arr);
 for(auto i : ans) {
    cout<<i<<" ";
 }
return (0);
}