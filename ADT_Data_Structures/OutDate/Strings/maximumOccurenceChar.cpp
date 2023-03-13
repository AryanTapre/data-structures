// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

#include<iostream>
using namespace std;

char getMaximumOccChar(string str) {

    int alphaCount[26] = {0};
    int number = 0;
    for(int i=0; i<str.length(); i++) {

        char ch = str[i];
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 97;  // 'a'-> 97... so on...
        }
        else {
            number = ch - 65;  // 'A'-> 65... so on...
        }

        alphaCount[number]++;
    }

    // finding maximum count....

    int maxi = 0;
    for(int k=1; k<26; k++) {

        if(alphaCount[k] > alphaCount[maxi]) {
            maxi = k; 
        }
    }
    
    char ch = 'a' + maxi;
    return ch;
}

int main() {

    string str;
    cin>>str;

    cout<<"maximum character occurence is -> "<<getMaximumOccChar(str)<<endl;


    return 0;
}