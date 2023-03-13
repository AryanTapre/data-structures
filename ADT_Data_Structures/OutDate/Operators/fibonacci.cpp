#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"enter n:";
    cin>>n; 
 
//Printing Series Till Given value of n.

    int c=0,a=0,b=1;

    if(n>1) {
        cout<<0<<","<<1<<",";
    }
    while(c!=n) {
        c = a+b;
        if(c!= n) 
            cout<<c<<",";
        else
            return 1;
        
        a=b;
        b=c;
    }


    return 0;
}