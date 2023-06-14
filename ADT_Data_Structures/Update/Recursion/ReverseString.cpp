/*
TODO: Reverse string via recursion
*/

#include<iostream>
using namespace std;
 
    // TC: O(N)
    // SC: O(N)
    void reverse(string& s, int low, int high) {
        // base case:
        if(low >=high) return;

        // processing:
        swap(s[low],s[high]);

        // recursive call:
        reverse(s,low+1,high-1);
    }

int main() {
 
    string str = "abc";
    int low = 0;
    int high = str.size()-1;

    if(high != -1) {
        reverse(str,low,high);
        cout<<"reverse:"<<str<<endl;
    }
    else {
        cout<<"reverse not possible, invalid size!"; 
    } 
        
        

return (0);
}