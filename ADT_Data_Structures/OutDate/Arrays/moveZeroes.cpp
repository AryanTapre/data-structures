// move all zeros elements to right and non-zeros elements to the left..
#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int> & nums) {

    // int index = 0,countZeros = 0,i;

    // for(i = 0; i < nums.size(); i++) {

    //     if(nums[i] != 0) {

    //         countZeros ++;
    //         nums[index] = nums[i];
    //         index ++;
    //     }
    // }

    // countZeros = i - index;

    // for(int k = index; k<nums.size(); k++) {

    //     nums[k] = 0;
    // }

    int nonZero = 0;

    for(int i = 0; i < nums.size(); i++) {

        if(nums[i] != 0) {

            swap(nums[i], nums[nonZero]);
            nonZero ++;
        }
    }

}

void print(vector<int> nums) {

    for(int i = 0; i<nums.size(); i++) {

        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int main() {


    vector<int> nums;

    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);

    moveZeroes(nums);

    print(nums);

    return (0);
}