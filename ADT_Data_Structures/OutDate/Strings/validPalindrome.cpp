// leet code problem: 125 valid palindrome..

#include<iostream>
using namespace std;

bool isValid(char ch) {

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return true;
    }
    return false;
}

bool checkPalindrome(string str) {

    int s = 0;
    int e = str.length()-1;

    while(s<=e) {

        if(str[s] != str[e]){
            return false;
        }
        else {
            s++;
            e--;
        }
    }
    return true;
}

bool isPalindrome(string str) {

    string temp = "";

    for(int i=0; i<str.length(); i++) {
        
        if(isValid(str[i])) {
            temp.push_back(str[i]);
        }
    }

    // to lower case...

    for(int i=0; i<temp.length(); i++) {
        temp[i] = tolower(temp[i]);
    }

    return checkPalindrome(temp);
}

int main() {

    string str;
    cout<<"Enter yout string:";
    cin>>str;

    if(isPalindrome(str))
    {
        cout<<endl<<"Valid palindrome..";
    }
    else
    {
        cout<<endl<<"Not valid palindrome..";
    }

}