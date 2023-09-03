/*
permute the string "ab":
"ab", "ba"
*/

#include<iostream>
using namespace std;
 
    void stringPermutation(string& str, int i) {
        // base case:
        if(i>= str.length()) {
            cout<<str<<" ";
            return;
        }

        for(int j=i; j<str.length(); j++) {
            swap(str[i],str[j]);
            stringPermutation(str,i+1);

            // backtracking: moving to original string
           swap(str[i],str[j]);
        }
    }

int main() {
 
    string str = "abc";
    stringPermutation(str,0);

return (0);
}