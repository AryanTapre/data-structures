/*
GFG: https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1?page=2&difficulty%5B%5D=0&category%5B%5D=Arrays&sortBy=submissions
TODO: Move all negative elements to end
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
    void segregateElements(int arr[],int n)
    {
        int positive[n];
        int negative[n];
        int pi = 0;
        int ni = 0;
        
        for(int i=0; i<n; i++) {
            if(arr[i] > 0) {
                positive[pi] = arr[i];
                pi++;
            } else {
                negative[ni] = arr[i];
                ni++;
            }
        }
        
        
        // int s = 0;
        // int e = n-1;
        // int i = 0;
        // while(s<=e) {
        //     if(arr[i]>0) {
        //         //swap(arr[s],arr[i]);
        //         s++;
        //         i++;
        //     } else {
        //         swap(arr[s],arr[e]);
        //         e--;
        //     }
        // }
        sort(arr,arr+n);
        reverse(arr,arr+n);
        
        // order maintain
        pi = ni = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] > 0) {
                arr[i] = positive[pi];
                pi++;
            } else {
                arr[i] = negative[ni];
                ni++;
            }
        }
    }

int main() {
 
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6 };
    int n = 8;
    segregateElements(arr,n);
    
    for (auto &&i : arr)
    {
        cout<<i<<" ";
    }


return (0);
}