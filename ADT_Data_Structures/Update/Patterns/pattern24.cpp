// 16
// 121
// 12321
// 121
// 1

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    for(int row=0;row<n;row++) {
        int condition = row<= n/2 ? 2*row : 2*(n-row-1);
        for(int col=0;col<=condition;col++) {
            if(col<=condition/2) {
                cout<<col+1;
            }
            else {
                cout<<condition-col+1;
            }

        }   
        cout<<endl;
    }
    return (0);
}