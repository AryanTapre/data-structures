// *                  *
// **                **
// ***              ***
// ****            ****
// *****          *****
// ******        ******
// *******      *******
// ********    ********
// *********  *********
// ********************
// ********************
// *********  *********
// ********    ********
// *******      *******
// ******        ******
// *****          *****
// ****            ****
// ***              ***
// **                **
// *                  *
// butterfly pattern...
#include<iostream>
using namespace std;

int main()
{   
    int n;
    cin >> n;

    for(int row=0;row<n;row++) 
    {
        for(int col=0;col<n;col++)
        {
            if(col<=row)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

       for(int col=0;col<n;col++)
       {
                if(col >= n-row-1)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
       }     


        cout<<endl;
    }

    for(int row=0;row<n;row++) 
    {
        for(int col=0;col<n;col++) 
        {
            if(col<=n-row-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        for(int col=0;col<n;col++) 
        {
            if(col >= row)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }

        cout<<endl;
    }
    return 0;
}