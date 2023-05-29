/*
    remove all occurrences of given string for part of string using recursion.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 void removeOccurrences(string& s, string& p, size_t f) {
    if((s.find(p)) == string::npos) {
        return;
    }

    f = s.find(p);
    s.erase(f,p.size());
    removeOccurrences(s,p,f);
 }

int main() {
 
    string s = "aryan";
    string p = "t";
    size_t f = 0;

    removeOccurrences(s,p,f);
    cout<<s<<endl;

return (0);
}