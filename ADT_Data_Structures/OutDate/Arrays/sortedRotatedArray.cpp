// leet code PROBLEM : 1752 check if array is sorted and roatated..

#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int> nums) {

    int count = 0;
    int n = nums.size();

    for(auto i=1; i<n; i++) {

        if(nums[i-1] > nums[i]) {
            
            count++;
        }
    }

    if(nums[n-1] > nums[0]) 
        count++;

    return count <= 1;

}

int main() {

    vector<int> nums;
    nums.push_back(99);
    nums.push_back(102);
    nums.push_back(112);
    nums.push_back(140);
    nums.push_back(141);
    nums.push_back(98);

    cout<<"Array is sorted and rotated ? ->"<<check(nums)<<endl;
    
    return 0;
}