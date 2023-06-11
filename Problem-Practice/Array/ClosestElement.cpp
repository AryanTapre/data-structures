/*
GFG: https://practice.geeksforgeeks.org/problems/find-the-closest-number5513/1
*/

#include<bits/stdc++.h>
using namespace std;
 
    int findClosest(int arr[], int n, int k) 
    { 
        array<pair<int,int>,1> store;
        store.fill(make_pair(INT_MAX,INT_MAX));
        
        int low=0;
        int high=n-1;
        int ans = -1;
        
        while(low <= high) {
            
            if(abs(arr[low]-k) > abs(arr[high]-k)) {
                low++;
            } else {
                high--;
            }

            if(abs(arr[low]-k) == abs(arr[high]-k)) {
                int large;
                if(arr[low]>arr[high]) {
                    large = arr[low];
                } else {
                    large = arr[high];
                }

                if(abs(large-k) < store.at(0).second) {
                    store.fill(make_pair(large,large-k));
                }
            }
        }
        
        if(store.at(0).first != INT_MAX) {
            ans = store.at(0).first;
        } else {
            ans=arr[low];
        }
        
        return ans;
    }

int main() {
 
    int arr[] = {1, 3, 6, 7};
    int n=4;
    int k=4;

    cout<<findClosest(arr,n,k)<<endl;

return (0);
}