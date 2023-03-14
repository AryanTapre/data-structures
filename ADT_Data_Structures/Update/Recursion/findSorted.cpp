// check whether given array is sorted return true.
#include<iostream>
#include<vector>
using namespace std;
 
    bool isSorted(vector<int>& nums, int& N,int& i) {
        if(i == N) return true;

        if(nums[i] < nums[i-1]) {
            return false;
        }
       
        return isSorted(nums,N,++i);     
    }

int main() {    

     vector<int> nums{10,20,30,40,10};
     int N = nums.size(),i=1;
     
    if(isSorted(nums,N,i)) {
        cout<<"array is sorted.";
     }
    else {
        cout << "array is not sorted.";
    }


return (0);
}