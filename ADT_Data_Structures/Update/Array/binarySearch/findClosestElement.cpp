// leet code 658. Find K Closest Elements
#include<iostream>
#include<vector>
using namespace std;
 vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      
      int low = 0,high = arr.size()-1;
      while(high-low >= k) {
          if(x-arr[low] > arr[high]-x) {
              low++;
          }
          else{
              high--;
          }
      }

      vector<int> ans ;
      for(int i=low;i<=high;i++) {
          ans.push_back(arr[i]);
      }
      return ans;

    }
 
int main() {
    vector<int> arr{1,2,3,4,5};
    vector<int> ans = findClosestElements(arr,4,3);
    for(auto i:ans){
        cout<<i<<" ";
    }
    
return (0);
}