// 123456
// 2   5
// 3  5
// 4 5
// 55
// 6

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size for pattern:";
    cin>>n;

    for(int row=0;row<n;row++) {
        for(int col=0;col<n-row;col++) {

            if(row == 0)
            {
                cout<<col+1;
            }
            else
            {
                if(col == 0){
                    cout<<row+1;
                }else if(col == n-row-1){
                    cout<<"5";
                }
                else {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}