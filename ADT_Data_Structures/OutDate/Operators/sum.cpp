#include<iostream>
using namespace std;

int main() {

    int n,s=0;
    cout<<"enter n:";
    cin>>n;

    for(int i=1; i<=n; i++) {
        s = s+i; 
    }
    cout<<endl<<"sum is :"<<s;

    return 0;
}