/*
LeetCode: 191
*/

#include<iostream>
#include<vector>
using namespace std;
 
    int robHelper(vector<int>&nums, int i) {
        // base case:
        if(i>= nums.size()) {
            return 0;
        }

        int robAmt1 = nums[i] + robHelper(nums,i+2);
        int romAmt2 = 0 + robHelper(nums,i+1);

        return max(robAmt1,romAmt2);
    }

    // TC: O(2^N)
    // SC: O(N)
    int rob(vector<int>& houses) {
        return robHelper(houses,0);
    }

int main() {
 
    vector<int> houses = {1,2,3,1};
    cout<<rob(houses);

return (0);
}