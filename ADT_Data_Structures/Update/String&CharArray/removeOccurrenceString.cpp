// leet code 1910
#include<string>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
string removeOccurrences(string s, string part) {
    size_t index = s.find(part);
    while(index != string::npos) {
        s.erase(index,part.length());
        index = s.find(part);
    }
    return s;
}

int main() {
 
 string s = {"daabcbaabcbc"},part = {"abc"};
 string ans = removeOccurrences(s,part);
 cout<<"after removal : "<<ans<<endl;
return (0);
}
