// ********1********
// *******2*2*******
// ******3***3******
// *****4*****4*****
// ****5*******5****

#include<iostream>
#include<assert.h>
using namespace std;

int main() {

    int n;
    cout<<"enter size for pattern:";
    cin>>n;
    assert(n <= 9);
    int c = (n-1)*2;
    for(int row=0;row<n;row++) {
        for(int col=0;col<c;col++) {
            cout<<"*";
        }
        c--;

        for(int col=0;col<2*row+1;col++) {
            if(col == 0 || col == 2*row+1-1) {
                cout<<row+1;
            }
            else {
               cout<<"*";
                
            }
        }

        for(int col=c;col>=0;col--) {
            cout<<"*";
        }



        cout<<endl;
    } 

    
    return 0;
}