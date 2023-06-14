/*
print the subarrays [1,2,3];
eg.
1 12 123
2 23
3
*/

#include<iostream>
#include<vector>
using namespace std;
 
    void printHelper(int start, int end, vector<int>& nums) {
        if(end == nums.size()) return;
        
        for(int i=start; i<=end; i++){
            cout<<nums.at(i)<< " ";
        }
        cout<<endl;

        printHelper(start,end+1,nums);
    }

    void printSubArray(vector<int>&nums) {
        for(int i=0; i<nums.size(); i++) {
            int end = i;
            printHelper(i,end,nums);
            cout<<endl;
        }
    }

int main() {
 
    vector<int> nums = {1,2,3,4,5};
    printSubArray(nums);

return (0);
}