#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 

    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int> map;
        for(int i=0; i<n; i++) {
            map[a[i]]++;
        }
        int ans=-1;
        for(auto i:map) {
            if(i.second >= k) {
                ans = i.first;
            }
            
            cout<<i.first<<" "<<i.second<<endl;
        }
        return ans;
    }

int main() {

    int arr[] = {4, 2, 2, 2, 3, 4, 4, 4, 3, 2};
    int n = 10;
    int k=3;
    cout<<firstElementKTime(arr,n,k);


return (0);
}