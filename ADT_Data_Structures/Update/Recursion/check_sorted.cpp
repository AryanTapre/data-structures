/*
    check whether given array is sorted or not
    return true is sorted; otherwise return false..
*/

#include<vector>
#include<iostream>
using namespace std;
 
    bool isSorted(vector<int>&a, int i) {
        if(i == a.size()) {
            return true;
        }

      if(a.at(i) < a.at(i-1)) 
      return false;

      return isSorted(a,(i+1));
      
    }

int main() {
    
    vector<int> arr ={1,1,1,1};
    int i = 1;
    if(isSorted(arr,i)) {
        cout<<"sorted..";
    } else {
        cout<<"not sorted..";
    }

return (0);
}