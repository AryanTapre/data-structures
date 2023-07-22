#include<iostream>
using namespace std;

int x = 100;  // GLOBAL VARIABLE


int main() {
 
    ::x = 120;
    int x = 45;
    cout<<"printing the local: "<<x<<endl;
    cout<<"Printing the global :"<<::x<<endl;

    int bob = 16;

    {
        int bob = 12;
        cout<<bob<<endl;
        cout<<x<<endl;
        cout<<::x<<endl;

    }



return (0);
}