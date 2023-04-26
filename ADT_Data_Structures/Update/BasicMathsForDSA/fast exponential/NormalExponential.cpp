#include<bits/stdc++.h>
using namespace std;

    int normalExponential(int a, int b) {
        int ans = 1;
        for(int i=0; i<b; i++) {
            ans *= a;
        }
        return  ans;
    } 

int main() {
    cout<<"expo = "<<normalExponential(2,3) <<endl;
return 0;
}