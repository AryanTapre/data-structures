#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    vector<int> arr;
    arr.push_back(12);

    for(auto i : arr) {
        cout<<i<<endl;
    }

    int ** a = new int*[5];
    for(int i=0;i<5;i++) {
        a[i] = new int[5];
    }

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            a[i][j] = 0;
        }
     
    }

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>> b(3,vector<int>(3,12));
    for(auto i : b) {
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }


return (0);
}