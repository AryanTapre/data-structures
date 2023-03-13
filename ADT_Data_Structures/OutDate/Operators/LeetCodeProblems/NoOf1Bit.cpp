//pno 191:
#include<iostream>
using namespace std;

int main() {

    int n,count=0;
    cout<<"enter n:";
    cin>>n;

// Using Bit Wise Operator.
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout<<"No of 1 bit:"<<count;
    return 0;
}