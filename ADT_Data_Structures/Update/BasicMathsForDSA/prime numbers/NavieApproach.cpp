/*  QUE: Find total primes between integer n.
    leet code : 204
     */

#include<iostream>
using namespace std;

    bool isPrime(int n) {
        if(n <=1 ) return 0;
        for(int i=2; i<n-1; i++) {
            if(n % i == 0) return false;
        }
        return true;
    }

int countPrimes(int n) {
    int count = 0;

    for(int i=0; i<n; i++) {
        if(isPrime(i)) ++count;
    }
    return count;
}

// Driver Code..-
int main() {
    int n = 2;
    cout<<"total primes : "<<countPrimes(n) <<endl;

return 0;    
}