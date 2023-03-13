#include<iostream>
#include<vector>
using namespace std;
 
void sortColors(vector<int>& nums) {
    int j,ele = -1;
    bool flag = true;
    cout<<nums.size()<<endl;
    for(int i=0;i<nums.size()-1;i++) {
        for(j=i+1;j<nums.size();j++) {
            
            if(flag) {
                if(nums[j] < nums[i]) {
                ele = j;
                flag = false;
                }    
            }
            else {
                if(nums[j] < nums[ele]) {
                ele = j;
                }
            } 
        }
        if(ele > -1){
            swap(nums[i],nums[ele]);
        }  
    }
} 

int main() {

    vector<int> v {2,0,2,1,1,0};
    sortColors(v);
    for(auto i : v) {
        cout<<i<<" ";
    }
return (0);
}