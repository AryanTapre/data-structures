#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size for pattern:";
    cin>>n;
    
    for(int row=0;row<n;row++) {

        //spaces.
        for(int col=0;col<n-row-1;col++) {
            cout<<" ";
        }
            
        //stars..
        for(int col=0; col<2*row+1;col++) {
          
            if(col == 0 || col == 2*row) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }

   int k=8;
    for(int row=0;row<n;row++) {
        for(int col=0;col<row;col++) {
            cout<<" ";
        }

        for(int col=0;col<2*n-2*row-1;col++) {
            
            if(col == 0 || col == 2*n-2*row-2) {
                cout<<"*";
                
                
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
        k=k-1;
    }


    return 0;
}
