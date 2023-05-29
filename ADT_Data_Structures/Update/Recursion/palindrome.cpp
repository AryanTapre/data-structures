/*
check given string is palindrome ? using recursion.
*/

#include<iostream>
#include<string.h>
using namespace std;
    
    bool isPalindrome(string& str, int sp, int ep) {
        // base condition::
        if(sp == ep || sp >= ep) {
            return true;
        }
        else if (str.at(sp) != str.at(ep)) {
            return false;
        }

        return isPalindrome(str,sp+1,ep-1);
    }

int main() {
    string str = "abb";
    int sp = 0;
    int ep = str.size()-1;

   if(isPalindrome(str,sp,ep)) {
    cout << "string IS palindrome.";
   } else {
    cout << "string is NOT palindrome.";
   }

return (0);
}