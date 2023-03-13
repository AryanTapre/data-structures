// intersection of two sorted array
#include<iostream>
#include<vector>
using namespace std;



vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> v;
    int i=0,j=0;
    while(i<n && j<m) {
        if(arr1[i] == arr2[j]) {
            v.push_back(arr1[i]);
            i++,j++;
        }
        else if(arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    return v;
}

int main() {
 
    vector<int> arr1{1,2,3};
    vector<int> arr2{3,4};
    vector<int> ans = findArrayIntersection(arr1,3,arr2,2);
    for(auto i : ans) {
        cout<<i <<" ";
    }

return (0);
}