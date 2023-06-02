#include<vector>
#include<iostream>
using namespace std;
 
     void sortColors(vector<int>& nums) {
        int i = 0;
        int red = 0;
        int blue = nums.size()-1;

        while(red <= blue) {
            if(nums[red] == 0) {
                swap(nums[i],nums[red]);
                i++;
                red++;
            } else if (nums[red] == 1) {
                red++;
            } else {
                swap(nums[red],nums[blue]);
                blue--;
            }
        }
        
    }

int main() {
 
  
    vector<int> nums = {2,0,1};
    sortColors(nums);
    cout<<endl<<"after"<<endl;
    for(auto i : nums){
        cout<<i<<" ";
    }

return (0);
}
