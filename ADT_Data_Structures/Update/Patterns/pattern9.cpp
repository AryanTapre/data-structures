// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *  


#include<iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"enter size for pattern:";
    cin>>n;

    for(int row=0;row<n;row++) {
        int spacec=0;
        bool flag=true;

        for(int col=0;col<=(n-1)*2-row;col++) {

            if(spacec >= row) 
            {
                if(flag) {
                    cout<<"*";
                    flag = false;
                }
                else {
                    cout<<" ";
                    flag = true;
                }
            }
            else 
            {
                cout<<" ";
                spacec++;
            }
        }
        cout<<endl;
    }
    return (0);
}