#include<bits/stdc++.h>
using namespace std;

int fastExponential(int a, int b) {
        int ans = 1;
        while( b>0 ) {
                if(b & 1) {
                    // odd
                    ans=ans*a;
                }
                a = a*a;
                b>>1; // divide by 2

        }
        return ans;
} 

int main() {

    cout<<"expo = "<<fastExponential(2,3) <<endl;
return 0;
}