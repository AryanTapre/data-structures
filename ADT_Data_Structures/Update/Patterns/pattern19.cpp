// 1 
// 1 2
// 1   3
// 1     4
// 1       5
// 1 2 3 4 5 6

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size for pattern:";
    cin>>n;

    for(int row=0;row<n;row++) {
        for(int col=0;col<row+1;col++) {
            if(col == 0 || col == row || row==n-1) {
                if(col==0)
                    cout<<"1 ";
                else if(col == row)
                    cout<<row+1;
                else 
                    cout<<col+1<<" ";
                
            }
            else {
                cout<<"  ";
            }
            
           
        }
        cout<<endl;
    }

    return 0;
}