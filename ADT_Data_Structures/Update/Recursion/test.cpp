#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 void maxAmountRobbed(vector<int>& nums,int amount, int& maxi, int i) {
   if(i>= nums.size()) {
     maxi = max(maxi,amount);
     return;
   }

   // include
   maxAmountRobbed(nums,amount+nums[i],maxi,i+2);
   // exclude
   maxAmountRobbed(nums,amount,maxi,i+1);
 }

int main() {
 
  
  vector<int> nums = {1,2};
  int amount = 0;
  int maxi = INT_MIN;
  int i=0;

  maxAmountRobbed(nums,amount,maxi,i);
  cout << maxi <<endl; 
  return 0;
}