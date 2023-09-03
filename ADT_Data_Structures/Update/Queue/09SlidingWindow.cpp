// print first -ve integers in every window of size k
// # SLIDING WINDOW   
// # Important for InterView Perspective

#include<queue>
#include<iostream>
using namespace std;


void solve(int arr[], int k, int size) {
    queue<int> q;

    // processing the first Window
    for(int i=0; i<k; i++) {
        if(arr[i] < 0){
            q.push(i);
        }
    }

    // processing the remaining window..
    for(int i=k; i<size; i++) {
        // find answer of previous window
        if(!q.empty()) {
            cout<<arr[q.front()]<<" ";
        } else {
            cout<<0<<" ";
        }

        // removing out of window elements..
        while(i-q.front() >= k) {
            q.pop();
        }

        // inserting a new element..
        if(arr[i] < 0) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        cout<<arr[q.front()]<<" ";
        q.pop();
    }
}

int main() {

    int arr[] = {-1,18,-24,1,-16,6,-18,3};
    int k = 3;
    int size = 8;

    solve(arr,k,size);

return 0;
}