#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int a[], int size) {
    int max = a[0];
    for(int i=1; i<size; i++) {
        if(max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int getMin(int a[],int size) {
    int min = a[0];
    for(int i=1;i<size; i++) {
        if(min > a[i]) {
            min = a[i];
        }
    }
    return (min);
}

int main() {

    int size,a[10];
    cout<<"enter size of array:";
    cin>>size;

    cout<<endl<<"enter array elements:";
    for(int i=0; i<size; i++) {
        cin>>a[i];
    }

    cout<<"maximum is : "<<getMax(a,size);
    cout<<endl<<"minimum is : "<<getMin(a,size);

    return (0);
}