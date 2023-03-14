// print all digits of given number..
#include<iostream>
using namespace std;
 
    void printDigit(int n) {
        if(n == 0) return ;

        printDigit(n/10);
        int digit = n % 10;
        cout << digit<<" ";
    }

int main() {
 
    int n = 0647;
    if(n == 0) cout<<"0";
    else printDigit(n);

return (0);
}