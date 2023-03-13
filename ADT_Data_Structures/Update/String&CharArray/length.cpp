#include<iostream>
using namespace std;

int length(char arr[]) {
    int i = 0;
    int length = 0;
    while (arr[i] != '\0')
    {   
        i++;
    }
    return i;
}

int main() {
 char arr[100];
 cout<<"enter your name : "<<endl;
 cin.getline(arr,100);
 cout<<"Length is : "<<length(arr);
return (0);
}