/*
    need to perform intersection of arrays.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
    void intersection(vector<int>& a, vector<int>& b) {
        for(int i=0; i<a.size(); i++) {
            for(int j=0; j<b.size(); j++) {
                if(a[i] == b[j]) {
                    cout<<a[i]<<" ";
                    b[j] = b[j] * -1;
                }
            }
        }
    }        

int main() {
    vector<int> a = {1,2,2,3,3,6,8,4};
    vector<int> b = {3,4};
    intersection(a,b);

return (0);
}