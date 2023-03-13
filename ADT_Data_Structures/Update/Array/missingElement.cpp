// finding missing element in array with duplicates
// size of array is N
// a[i] ranges from [1,N].
#include<iostream>
#include<vector>
#include <cstdlib>
using namespace std;

void findMissing(vector<int>& nums) {
    // negative marking method..
    for(int i=0; i<nums.size(); i++) {
        int index = abs(nums[i]);
        if(nums[index -1] > 0) {
            nums[index-1] *= -1;
        }
    } 
    for(int i=0;i<nums.size();i++) {
        if(nums[i] > 0) {
            cout<<i+1<<" ";
        }
    }

// sorting+swapping method
    // int i=0;
    // while(i<nums.size()) {
    //     int index = nums[i]-1;
    //     if(nums[i] != nums[index]) {
    //         swap(nums[1],nums[index]);
    //     }
    //     else {
    //         i++;
    //     }
    // }
    // for(int i=0;i<nums.size();i++) {
    //     if(nums[i] != i+1) {
    //         cout<<i+1<<" ";
    //     }
    // }


} 


int main() {
    vector<int> nums{1,2,3,4,6,7,8,11};
    cout<<"missing element : ";
    findMissing(nums);
return (0);
}