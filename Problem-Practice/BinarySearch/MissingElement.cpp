/*
TODO: return the missing element from array : size-N, arr[i]=[1,N]
*/
#include<bits/stdc++.h>
using namespace std;
 
    int getMissing(vector<int>&A) {
        int l=0;
        int h=A.size()-1;
        while(l<h) {
            int mid = l+(h-l)/2;
            if(A[mid] == mid+1){
                l=mid+1;
            }
            else {
                h=mid;
            }
        }
        return l+1;

    }

int main() {
 
    vector<int>  v = {1,2,3,4,5,6,8};
    cout<<getMissing(v); 

return (0);
}
