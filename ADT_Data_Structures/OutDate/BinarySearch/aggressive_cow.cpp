#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int k, int mid,int n) {

    int cowCount = 1;
    int lastPos = arr[0];

    for(int i=0; i<n; i++) {

        if(arr[i]-lastPos >= mid) {
            cowCount++;
            if(cowCount == k)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}
int aggressiveCow(int arr[], int k, int n ) {

    int s = 0;
    int e = arr[n-1]-arr[0]; // range is from  0 to (max-min) element;

    int mid = s + (e-s)/2;
    int ans = -1; 
    while(s<=e) {

        if(isPossible(arr,k,mid,n)) {
                ans = mid;
                s = mid + 1;
        }
        else
        {
            e = mid - 1;
        } 
        mid = s + (e-s)/2;
    }
    return ans;
    
}
int main() {
    
    int arr[5] = { 4,2,1,3,6 };
    int n = sizeof(arr) / sizeof(int);
    sort(arr,arr+n);

    cout<<aggressiveCow(arr,2,n);

    return 0; 
}

