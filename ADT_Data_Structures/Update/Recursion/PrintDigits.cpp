/* Application to print digits of given number 'N'
*/

#include<iostream>
using namespace std;
 
    void printDigit(int N) {
        if(N == 0) return;
        int digit = N % 10;
        
        N = N / 10;
        printDigit(N);
        cout<<digit<<" ";
    }

int main() {
    printDigit(123);
return (0);
}