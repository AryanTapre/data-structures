//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the length for pattern:";
    cin>>n;

    for(int row=0;row<n;row++) {
        int starc=0;
        for(int col=0;col<=(n-1+row);col++) {
            if(col>=n-(row+1) && starc<row+1 ) {
                cout<<"*";
                starc = starc + (row+1);
            }
            else {
                cout<<" ";
                if(col >=n-(row+1)){
                        starc = starc - (row+1);
                        starc++;
                }
            }

        }
        cout<<endl;
    }

    return 0;
}
