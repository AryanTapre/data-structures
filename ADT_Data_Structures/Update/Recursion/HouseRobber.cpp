/*
    leetcode 198
*/

#include<bits/stdc++.h>
using namespace std;

    // include and exclude pattern..
    void maxAmountRob(vector<int>& nums,int sum,int i,int& maxi) {
        if(i >= nums.size()) {
            maxi = max(maxi,sum);
            return;
        }

        maxAmountRob(nums,sum+nums[i],i+2,maxi); 
        maxAmountRob(nums,sum,i+1,maxi);
    }
    int rob(vector<int>& nums) {
        int sum = 0;
        int i = 0;
        int maxi = INT_MIN;

        maxAmountRob(nums,sum,i,maxi);
        return maxi;
    } 

int main() {
    vector<int> nums = {1,2,3,1};
    cout<< rob(nums)<<endl;

    // Non- RE
     int maxi = -1;
     vector<int> b = {1,2,3,1};
        for(int i=0; i<b.size()-2; i++) {

            int x = i;
            int sum = 0;
            while(x<= b.size()) {
                sum = sum + nums[x];
                
                x = x + 2; 
            }
           
            maxi = max(maxi,sum);
            
        }
       
       cout<<maxi;

return (0);
}