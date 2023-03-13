// Leet code PROBLEM : 189. Rotate array to right by k steps..

#include<iostream>
#include<vector>

using namespace std;

void rotateArray(vector<int> & nums, int k) {

    vector<int> temp(nums.size());

    for(int i=0; i<nums.size(); i++) {

        temp[(i+k)%nums.size()] = nums[i];
    }

    //copy temp into nums vector..

    nums = temp;

}

int main() {

    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);

    rotateArray(nums,3);

    cout<<endl<<"After rotate ->"<<endl;

    for(int i=0; i<nums.size(); i++) {

        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}