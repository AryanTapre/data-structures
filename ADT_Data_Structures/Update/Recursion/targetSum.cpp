// find minimum numbers of element required to form target elements from given array..
// e.g {1,2}; minimum no = 3(2,2,1)

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

    int solve(vector<int>& arr, int target) {
        // base case..
        if(target == 0) return 0;
        if (target < 0) return INT_MAX;
        
        int mini = INT_MAX;
        for(int i=0; i<arr.size(); i++) {
            int ans = solve(arr,target-arr[i]);
            if(ans != INT_MAX) 
                mini = min(mini,ans + 1);
        }

        return mini;
    }

    int solve2(vector<int>& arr, int target, int output) {
        
        if(target == output){
            return 0;
        } 
        if(output > target) return INT_MAX;

        int mini = INT_MAX;
        for(int i=0; i<arr.size(); i++) {
            
            int ans = solve2(arr,target,output + arr[i]);
            
            if(ans != INT_MAX) {
                mini = min(mini,ans + 1);
                
            }
                
        }
        return mini;
    }

 
int main() {
 
    vector<int>arr {1,2};
    int target = 5;
    int ans = solve(arr,target);
    cout << "answer is "<< ans;

    int output = 0;
    ans = solve2(arr,target,output);
    cout << endl << ans;

return (0);
}