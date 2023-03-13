#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char arr[]) {
    int size = strlen(arr);
    int i=0,j=size-1;
    while(i <= j) {
        if(arr[i] != arr[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main() {

    char arr[100];
    cout<<"enter info : "<<endl;
    cin.getline(arr,100);
    cout<<"palindrome : "<<checkPalindrome(arr);

return (0);
}