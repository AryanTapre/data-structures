#include<bits/stdc++.h>
using namespace std;

    int gcd(int a, int b) {
                    // .....base condition.....
            if(a == 0) return b;
            if(b == 0) return a;

            while( a>0 && b>0 ) {
                if(a>b) a = a-b;
                else b = b-a;
            }
            return a == 0 ? b : a ;
    }

int main() {

    cout<<"gcd = "<<gcd(72,24) << endl;

return 0;
}