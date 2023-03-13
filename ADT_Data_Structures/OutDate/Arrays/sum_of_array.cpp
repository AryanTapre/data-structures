#include<iostream>
using namespace std;

int getSum(int a[],int size) {

    int sum = 0;
    for(int i=0; i<size; i++) {
        sum = sum + a[i];
    }
    return sum;
}

int main() {

    int size,a[10];
    cout<<"enter size of array:";
    cin>>size;

    cout<<endl<<"enter array elements:";
    for(int i=0; i<size; i++) {
        cin>>a[i];
    }

    cout<<"Sum of array is : "<<getSum(a,size);
    return (0);

}