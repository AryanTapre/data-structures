// 1
// 1 2
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Length For pattern:";
    cin>>n;

    // for(int row = 0; row<n; row++) {
    //     for(int col = 0; col<=row; col++) {
    //         int dum = col+1;
    //         cout<<dum<<" ";
    //     }
    //     cout<<endl;
    // }

       for(int row = 0; row<n; row++) {
        for(int col = 0; col<=row; col++) {
            cout<<col+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}