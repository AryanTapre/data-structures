#include<iostream>
using namespace std;
 
    void printPermutation(string& str, int i) {
        // base-case:
        if(i >= str.length()) {
                cout<<str<<" ";
                return;
        }

        // swapping logic:
        for(int j=i; j<str.length(); j++) {
            swap(str[i],str[j]);
            printPermutation(str,i+1);
            swap(str[i],str[j]);  // backtracking here found !!.
        }
    }


int main() {
 
    string s = "abc";
    int i = 0;
    printPermutation(s,i);

return (0);
}