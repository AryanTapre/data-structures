#include<iostream>
using namespace std;

int findDuplicate(int a[],int size) {

    int ans = 0;
    for(int i=0; i<size; i++) {
        ans = ans ^ a[i];
    }

    for(int i=0; i<size; i++) {
        ans = ans ^ i;    
    }
    return ans;

}

int main() {

    int a[5] ={1,2,6,2,1};
    int R = findDuplicate(a,5);
    cout<<"duplicate element is : "<<R;

    return (0);

}

