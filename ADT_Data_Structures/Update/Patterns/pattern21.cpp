//     1    for value:5
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size for pattern:";
    cin>>n;
    int num=1,rown;

    for(int row=0;row<n;row++) {
        for(int col=0;col<n-row-1;col++) {
            cout<<" ";
        }

        for(int col=n-row-1;col<n;col++) {
            cout<<num;
            if(col <= n-2)
            num++;
        }
        rown = row+1;
        for(int col=0;col<row;col++) {
            cout<<rown-1;
            rown=rown-1;
        }
        cout<<endl;
        num=1;
    }

return 0;

}