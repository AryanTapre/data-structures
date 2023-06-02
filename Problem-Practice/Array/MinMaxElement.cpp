/*
GFG: https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Arrays&sortBy=submissions
TODO: Find minimum and maximum element in an array
*/

#include<utility>
#include<limits.h>
#include<iostream>
using namespace std;
 
    pair<long long, long long> getMinMax(long long a[], int n) {
        pair<long long,long long> ans;
    
        long long mini = INT_MAX;
        long long maxi = INT_MIN;
    
        for(long long i=0; i<n; i++) {
            mini = min(mini,a[i]);
            maxi = max(maxi,a[i]);
        }
    
        ans.first = mini;
        ans.second = maxi;
        return ans;
    }

int main() {
 
    long long arr[] = {3, 2, 1, 56, 10000, 167};
    int n = 6;
    pair<long long,long long> ans;
    ans = getMinMax(arr,n);

    cout<<"min:"<<ans.first<<" ,max:"<<ans.second<<endl;

return (0);
}