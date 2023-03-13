
#include<iostream>
using namespace std;

int getLength(char name[]) {
    int i;
    for( i = 0; name[i] != '\0'; i++) {
        continue;
    }
    return i;
}

char toLowerCase(char ch) {

    if(ch >= 'a' && ch<='z')
    {
        return ch;
    }
    else
    {
        ch = ch+32;
    }
    return ch;
        
}

bool checkPalindrome(char name[],int n) {

    int s = 0;
    int e = n-1;

    while(s<=e) {

        if(toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;

}

int main() {

    char name[20];

    cout<<"Enter string :";
    cin>>name;

    cout<<endl<<"Palindrome or not : "<<checkPalindrome(name,getLength(name));


    return 0;
}