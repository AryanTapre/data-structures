#include<iostream>
using namespace std;

int main() {

    // wild pointer un-initialized
    int *ptr;
    cout << *ptr <<endl;

    //deleting pointer
    int * px = new int;
    delete px;
    cout<<*px<<endl;

    // pointer to non-existing variable
    int *i = &x;
    cout<<*i<<endl;

return (0);
}