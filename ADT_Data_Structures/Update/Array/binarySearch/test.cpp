#include <iostream>
#include<vector>
using namespace std;

    void last_occu(vector<int>& arr,int key, int start, int end,int& ans) {
      // int start = 0;
      // int end  = arr.size()-1;
     int mid = (start + end)/2;
      // int ans = 0;

        if(start > end) return;
   
        if(arr[mid] == key) {
            ans = mid;
           // start = mid + 1;
            last_occu(arr,key,mid+1,end,ans);
        }
        else if(arr[mid] < key) {
          //start = mid + 1;
           last_occu(arr,key,mid+1,end,ans);
        }
        else {
        //  end = mid - 1;
          last_occu(arr,key,start,mid-1,ans);
        }
       // mid = (start + end)/2;
      

      
    }


int main() {
  vector<int> arr {0,2,3,3,3,3,5,5,5,10};
  int key = 3;
  int start = 0;
  int end = arr.size()-1;
  int mid = (start+end)/2;
  int ans = 0;
  last_occu(arr,key,start,end,ans);
  cout << ans << endl;
  return 0;
}