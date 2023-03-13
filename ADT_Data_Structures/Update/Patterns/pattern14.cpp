// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA


#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter the size for pattern:";
    cin>>n;
    cout<<endl<<endl;
    char ch = 65;
    for(int row=0;row<n;row++) {
        for(int col=0;col<2*row+1;col++) {
            if(col<row+1) {
                cout<<ch;
                
            }
            else{
                ch=ch-1;
                cout<<ch;
            }
            if(col<row)
            ch++;
        }
        cout<<endl;
        ch = 65;
    }

    return 0;
}