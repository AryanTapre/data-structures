/*  printing factorial of given number
    created by @AryanTapre
    on date 29.04.2023
    */

#include<iostream>
using namespace std;
    
    int findFactorial(int N) {
        if(N == 1) return 1;
        return N * findFactorial(N-1);
    }

int main() {

    int get = findFactorial(5);
    cout<<"Factorial is -> "<<get<<endl;

return (0);
}