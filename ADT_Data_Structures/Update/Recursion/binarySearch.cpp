/* binary search using recursion...
*/

#include<iostream>
#include<vector>
using namespace std;
 
    int binarySearch(vector<int>& arr,int low,int high,int& target) {
        // base case::
        if(low > high) 
            return -1;

        int mid = low + (high - low) /2;

        if(arr.at(mid) == target) 
            return mid;
        
        if(arr.at(mid) < target) {
            return binarySearch(arr,mid+1,high,target);
            
        } else {
            return binarySearch(arr,low,mid-1,target);
        }   
    }

int main() {
 
    int low,high,target,mid;
    vector<int> arr = {1,4,6,12,45,67,90,100,101};
    low  = 2;
    high = arr.size()-1;
    target = 1;

    int ans = binarySearch(arr,low,high,target);
    cout<<"element found at:"<<ans<<endl;

return (0);
}