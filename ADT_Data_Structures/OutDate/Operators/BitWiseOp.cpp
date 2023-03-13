#include<iostream>
using namespace std;

int main() {

    int a = 8,b = 5;
    cout<<"a&b = "<<(a&b)<<endl;
    cout<<"a&b = "<<(a|b)<<endl;
    cout<<"a&b = "<<~a<<endl;
    cout<<"a&b = "<<(a^b)<<endl;

    // left shift and right shift:
    cout<<endl<<"Shift Operators->"<<endl;
    cout<<(5<<1)<<endl;
    cout<<(2<<2)<<endl;
    cout<<(15>>1)<<endl;  

    return (0);
}
