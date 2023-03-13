//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid) {

    int studentCount = 1;
    int sum = 0;
    for(int i=0; i<n; i++) {

        if(arr[i]+sum <= mid) {
                sum = sum+arr[i];
        }
        else {
                studentCount+=1;
                if(arr[i] > mid || studentCount > m) {
                    return false;
                }
        }
    }
    return true;
}
   

int allocateBooks(int arr[], int n, int m) {

    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum+=arr[i];
    }
    int e = sum;

    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

            if(isPossible(arr,n,m,mid)) {
                    ans = mid;
                    e = mid-1;
            }
            else {
                    s = mid+1;
            }

            mid = s + (e-s)/2;
    }

    return ans;

}


int main() {

    int arr[4]= {12,34,67,90};
    int m=2,n=4;
    int ans = allocateBooks(arr,n,m);
    cout<<ans;
    return(0);
}
