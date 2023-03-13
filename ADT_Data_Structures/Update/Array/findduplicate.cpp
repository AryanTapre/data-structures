#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    while(nums[0] != nums[nums[0]]) {
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
}

int main() {
        vector<int> v{1,2,3,4};
        cout<<"duplicate : "<<findDuplicate(v)<<endl;
        
return (0);
}