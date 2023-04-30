/*  Creates application to find key element through given array
    */

#include<iostream>
#include<vector>
using namespace std;
 
    bool checkKey(vector<int>& arr, int i, int N,int& key) {
        if(i == N) return false;
        if(arr.at(i) == key) return true;
         
         return checkKey(arr,(i+1),N,key); 
    }

int main() {
    vector<int>arr{2,123,89,56,0,23,77,84,56};
    int key = 0,i = 0;

    if(checkKey(arr,i,arr.size(),key)) { 
        cout<<"element FOUND!";
     } else { 
        cout<<"element NOT found!";
     }

return (0);
}