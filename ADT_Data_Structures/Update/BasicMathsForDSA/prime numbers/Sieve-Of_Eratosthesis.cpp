/*  implementing theorem of sieve of Eratosthesis for finding prime numbers.

    */


#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
    
    vector<bool> sieve(int n) {
        vector<bool> s (n+1,true);
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


vector<bool> segmentedSieve(int L,int R) {

        vector<bool> Sieve = sieve(sqrt(R));
        vector<int> basePrime;
        for(int i=0; i<Sieve.size(); i++) {
            if(Sieve[i]) {
                basePrime.push_back(i);
            }
        }

        cout<<endl<<"printing"<<endl;
         for(int i=0; i<basePrime.size(); i++) {
           cout<<basePrime[i]<<" ";
        } cout<<endl;


        vector<bool> segmentSieve (R-L+1,true);
        if(L == 0 || L == 1) {
            segmentSieve[L] = false;
        }

        for(auto prime : basePrime) {

            int first_multiple = (L/prime) * prime;
            if(first_multiple < L) {
                first_multiple+= prime;
            }

            int j = max(first_multiple,prime*prime);
            while(j <= R) {
                segmentSieve[j - L] = false;
                j+=prime;
            }

        }
    return segmentSieve;
}

int main() {
 
    vector<bool>Sieve = sieve(10);
    for(int i=0; i<Sieve.size(); i++) {
        if(Sieve[i]) cout<<i<<" ";
    }

    cout<<endl<<endl;
    int L=11,R=21;
    vector<bool> seg = segmentedSieve(L,R);
    for(int i=0; i<seg.size(); i++) {
        if(seg[i]) {
            cout<<i+L<<" ";
        }
    }

    cout<<endl<<endl;


return (0);
}