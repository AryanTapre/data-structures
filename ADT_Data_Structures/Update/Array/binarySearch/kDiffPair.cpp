// leet code Que:532  
// K-diff pairs in an array

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int findPairs(vector<int>& nums, int k) {
        int count = 0;
        int i=0,j=i+1;
        set<pair<int,int>> ans;
        sort(nums.begin(),nums.end());
        while(j < nums.size()) 
        {
                  if(nums[j]-nums[i] == k) {
                      ans.insert({nums[i],nums[j]});
                     ++i;
                     ++j;
                  }
                  else if(nums[j]-nums[i]>k) {
                      ++i;
                  }
                  else{
                      ++j;
                  }
           
                  if(i==j) j++;
           

        }
        return ans.size();
    }

int main() {
 
    vector<int> arr{1,2,3,4,5};
    cout<<findPairs(arr,1);

return (0);
}
