#include<bits/stdc++.h>
using namespace std;

void point() {
    
    int var = 20;
    int * ptr;
    ptr = &var;

    cout<<"value at var : "<<var<<endl;
    cout<<"address at var : "<<&var<<endl;
    cout<<"value at ptr : "<<ptr<<endl;
    cout<<"address at ptr : "<<&ptr<<endl;
    cout<<"ptr pointing to value : "<<*ptr<<endl;

}

int main() {

    point();
return 0;
}