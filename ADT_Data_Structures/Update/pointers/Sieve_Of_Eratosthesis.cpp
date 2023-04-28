/*  implementing theorem of sieve of Eratosthesis for finding prime numbers.

    */


#include<iostream>
#include<vector>
using namespace std;
    
    vector<bool> sieve(int n) {
        vector<bool> s (n,true);
        s[0]=s[1] = false;

        for(int i=2; i*i<n; i++) { // optimization2
            if(s[i]) {
               // int j = i*2;
                  int j = i*i; // optimization1
                while(j<n) {
                    s[j] = false;
                    j+=i;
                }
            }
        }
        return s;
    }

int main() {
 
    vector<bool>Sieve = sieve(25);
    for(int i=0; i<Sieve.size(); i++) {
        if(Sieve[i]) cout<<i<<" ";
    }

return (0);
}