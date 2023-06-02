/*
    TODO: find the missing element from array with duplicates
    N - size of array
    A[i] = (1,N)
*/

#include<vector>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    // TC: O(N)+O(N) = O(2N) = O(N)
    // SC: O(1)
    int getMissingElement(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) {  // O(N)
            int index = abs(nums[i])-1;
            
            if(nums[index] < 0) continue;

            nums[index] *= -1;
        }

        for(int i=0; i<nums.size(); i++) {  // O(N)
            if(nums[i] > 0) {
                return i+1;
            }
        }
        return -1;
    }

int main() {
 
    vector<int> nums = {1,4,5,2,2};
    cout<<"missing is:"<<getMissingElement(nums)<<endl;

return (0);
}