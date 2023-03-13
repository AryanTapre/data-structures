// leetcode 917.
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 bool isLetter(char ch) {
        ch = tolower(ch);
        if(ch >= 'a' && ch <= 'z') return true;
        else return false;
    }


    string reverseOnlyLetters(string s) {
        
        int l = 0, h = s.size()-1;
        while(l < h) {
            if(isLetter(s[l]) && isLetter(s[h])) {
                swap(s[l],s[h]);
                l++; h--;
            }
            else if(isLetter(s[l]) == 0) {
                l++;
            }
            else {
                h--;
            }
        }
        return s;
    } 
int main() {

    string s ="ab-cd";
    string ans = reverseOnlyLetters(s);
    cout<<ans<<endl;

return (0);
}