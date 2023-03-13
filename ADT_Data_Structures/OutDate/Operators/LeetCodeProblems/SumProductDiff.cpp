// pno 1281
#include<iostream>
using namespace std;

int main() {

    int n,product=1,sum=0;
    cout<<"enter n:";
    cin>>n;

    while(n!=0) {
        int digit = n%10;
        product = product*digit;
        sum = sum+digit;
        n=n/10;
    }

    cout<<"Difference is :"<<(product-sum);

    return 0;
}