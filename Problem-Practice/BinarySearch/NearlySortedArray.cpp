/*
perform binary search in nearly sorted array.
Nearly sorted array=>

Assume if array is sorted,then element of  i th index on sorted array
will on i-1/i/i+1 index of nearly sorted array...

e.g..

arr[] = {10,3,40,20,50,80,70}     nearly-sorted  
v[]   = {3,10,20,40,50,70,80}     sorted
target = 40
*/

#include<vector>
#include<iostream>
using namespace std;
    
    int binarySearch(vector<int>&v, int target){
        int low=0;
        int high=v.size()-1;

        while(low <= high) {

            int mid = low+(high-low)/2;

            if(v[mid] == target) {
                return mid;
            }
            else if(mid-1>=0 && v[mid-1] == target) {
                return mid-1;
            }
            else if(mid+1<v.size() && v[mid+1] == target) {
                return mid+1;
            }

            // left search
            if(v[mid] > target) {
                high = mid-2;
            }
            else {
                low=mid+2;
            }
        }
        return -1;
    }

int main() {
 
    vector<int> v={10,3,40,20,50,80,70};
    int target = 1;
    cout<<binarySearch(v,target);
return (0);
}