/*
gfg:https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1
*/
#include<unordered_map>
#include<iostream>
using namespace std;
 
    int firstRepeated(int arr[], int n){
        // created a mapping of arr[i] as key and increment by 1 
        unordered_map<int,int> map;
        for(int i=0; i<n; i++) {
            map[arr[i]]++;
        }
        for(int i=0; i<n; i++) {
            if(map[arr[i]] > 1) {
                return i+1;
            }
        }
        return -1;
    }

int main() {
 
    int arr[] = {1,5,3,4,3,5,6};
    int n = 7;

    cout<<firstRepeated(arr,n)<<endl;

return (0);
}