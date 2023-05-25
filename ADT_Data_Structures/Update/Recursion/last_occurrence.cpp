/*
    find last occurrence of given character.
    created by- @AryanTapre
    on date- 25-05-2023
*/
#include<iostream>
#include<string.h>
using namespace std;
 
    int check(string& s, int i, char& ch) {
        if(i <= 0) {
            return i;
        }
        if(ch == s[i]) {
            return i;
        }

        return check(s,i-1,ch);
    }

int main() {
 string str = "abcddedg";
 int l = str.length()-1;
 char ch = 'g';
 cout<<check(str,l,ch);

return (0);
}