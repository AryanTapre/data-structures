#include<iostream>
using namespace std;

int prime(int n) {

    for(int i=2;i<n-1;i++) {
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main() {

    int n=1;
    if(prime(n)) {
        cout<<"prime";
    }
    else {
        cout<<"not prime";
    }

    return 0;
}