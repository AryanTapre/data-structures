/*
TODO: find last occurrence of character via recursion..
*/

#include<iostream>
using namespace std;
 
    //TC: O(N+1) = O(N)cd..
    // SC: O(N+1) = O(N)
    int lastOccurrence(string& s, int i, char k) {
        //base case:
        if(i<0) return -1;

        // processing..
        if(s[i] == k) return i;

        // recursive call
        return lastOccurrence(s,i-1,k);
    }

int main() {
 
    string str = "addbedfgd";
    char k = 'd';
    int i=str.size()-1;

    cout<<lastOccurrence(str,i,k);

return (0);
}