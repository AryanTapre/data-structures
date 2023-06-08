/*
GFG: https://practice.geeksforgeeks.org/problems/find-the-odd-occurence4820/1
*/

#include<iostream>
#include<unordered_map>
using namespace std;

    int getOddOccurrence(int arr[], int n) {
        
       unordered_map<int,int> map;
       int ans=-1;
       
       for(int i=0; i<n; i++) {
           map[arr[i]]++;
       }
       
       for(auto i : map) {
           if((i.second)%2 != 0) {
               ans = i.first;
               break;
           }
       }
       return ans;
    }

int main() {
 
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = 7;
    cout<<getOddOccurrence(arr,n);

return (0);
}