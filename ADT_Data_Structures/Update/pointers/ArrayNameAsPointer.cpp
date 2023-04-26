#include<bits/stdc++.h>
using namespace std;


// driver code...
int main() {

    int array_name[] = {5,10,20};
    int *ptr;
    ptr = array_name;

    cout<<"address of array_name : "<<&array_name<<endl;
    cout <<"value of ptr : "<<*ptr<<endl<<endl;

    cout<<"array elements ------->"<<endl;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;

return 0;  
}