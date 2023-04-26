#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {10,20,30,40,50};
    int *ptr = arr;

    for(int i=0; i<5;i++) {
        cout<<"address at ptr : "<<ptr<<endl;
        cout<<"value at *ptr : "<<*ptr<<endl;

        ptr++;
    }

return (0);
}