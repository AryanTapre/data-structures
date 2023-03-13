#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {

    vector<int> arr;
    int sum = 80;
    bool flag = false;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    for(int i=0;i<arr.size()-2;i++) {
        for(int j=0;j<arr.size()-1;j++) {
            for(int k=0;k<arr.size();k++) {
                if(arr[i]+arr[j]+arr[k] == sum) {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    flag = true;
                    exit(0);
                }        
            }
        }
    }

    if(!flag) {
        cout<<"Triplet pairs for sum not found!";
    }
   
return (0);
}