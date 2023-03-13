#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout<<"enter n : "<<endl; 
    cin>>n;

    int m = n,mask = 0;
    if(n == 0){
        cout<<"complement is : 1 "<<endl;
        exit(0);
    }
    while(m!=0) {
        mask = (mask  << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout<<endl<<"complement is : "<<ans<<endl;

return (0);
}