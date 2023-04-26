// implement binary search using recursion
#include<iostream>
#include<vector>
using namespace std;
 
    int b_s(vector<int>& nums, int& start, int& end, int& mid, int& key) {
        if(start > end) return -1;


        mid = start + (end-start)/2;
        if(nums[mid] == key) return mid;

        else if (nums[mid] < key)  {
            int nstart = mid+1;
            return b_s(nums,nstart,end,mid,key);
        }
            
        else {
            int nend = end-1;
            return b_s(nums,start,nend,mid,key);
        }
            
    }

int main() {
 
    vector<int> nums {10,20,30,40,50,60,70,80,90,100};
    int key = 1;
    int n = nums.size();
    int start = 0;
    int end = n-1;
    int mid = 0;
    
    cout<<b_s(nums,start,end,mid,key);

                
    
return (0);
}