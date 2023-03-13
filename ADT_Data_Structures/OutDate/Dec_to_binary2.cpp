#include<math.h>
#include<iostream>
using namespace std;

int main() {

        int n,ans = 0,i = 0;
        cout<<"Enter value for n:";
        cin>>n;

        while( n!= 0) {
            int bit = n & 1;
            ans = (pow(10,i)*bit)+ans;
            n = n >> 1;
            i++;

        }

        cout<<"Binary Conversion Is : "<<ans;
        return(0);
}