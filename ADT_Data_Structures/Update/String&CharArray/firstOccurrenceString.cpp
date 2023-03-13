// leetcode 28
#include<string>
#include<iostream>
using namespace std;
 
    int strStr(string& hayStack, string& needle) {
        size_t found = hayStack.find(needle);
        if(found == string::npos) return -1;
        else return found;
    }

int main() {
    string hayStack = "sadbutsad";
    string needle = "sad";
    cout<<strStr(hayStack,needle);
return (0);
}