// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 11*12*13*14*15
// 11*12*13*14*
// 11*12*13*14
// 11*12*13*
// 11*12*13
// 11*12*

#include<iostream>
#include<assert.h>
using namespace std;

int main() {

    int n;
    cout<<"enter size for pattern:";
    cin>>n;

    int c=1;
    for(int row=0;row<n;row++) 
    {
        bool flag = true;
        for(int col=0;col<2*row+1;col++)
        {   
            if(flag) 
            {
                cout<<c;
                c++;
                flag = false;
            }
            else 
            {
                cout<<"*";
                flag = true;
            }
        }
        cout<<endl;
    }

   int start = c-n;
   for(int row=0;row<n;row++)
   {
      int k = start;
      bool flag = true;
      for(int col=0;col<n-row+3;col++) {
        if(flag) {
             cout<<k;
                k++;
                flag = false;
        }
        else {
            cout<<"*";
            flag = true;
        }
             }  
      cout<<endl;
   }


    return 0;
}