#include<iostream>
using namespace std;
 
    // TC: O(N/2) = O(N)
    // SC: O(N/2) = O(N)
    bool isPalindrome(string& s, int start, int end) {
        if(s.empty()) {
            return false;
        }
        // base case:
        if(start >= end) {
            return true;
        }

        if(s[start] != s[end]) {
            return false;
        }
        
        return isPalindrome(s,start+1,end-1);
    }

int main() {
 
    string str = "pp";
    cout<<isPalindrome(str,0,str.size()-1);


return (0);
}