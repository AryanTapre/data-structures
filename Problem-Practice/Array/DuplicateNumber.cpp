/*
leetcode: 287
*/
#include<vector>
#include<iostream>
using namespace std;
 
    int duplicate(vector<int>& nums) {
        int ans = -1;
        for(int i=0; i<nums.size(); i++) {

            int index = abs(nums[index]);
            if(nums[index] < 0) {
                ans = index;
                break;
            }

            nums[index]*=-1;

        }
        return ans;
    }

int main() {
 
    vector<int> nums = {1,2,4,3,2};
    cout<<duplicate(nums);

return (0);
}