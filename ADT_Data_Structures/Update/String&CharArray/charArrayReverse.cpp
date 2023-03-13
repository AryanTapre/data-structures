#include<iostream>
using namespace std;

int length(char arr[]) {
    int i = 0;
    int length = 0;
    while (arr[i] != '\0') {   
        i++;
    }
    return i;
}

void reverseCharArray(char arr[]) {
    int size = length(arr);
    for(int i=0,j=size-1; i<=j; i++,j--) {
        swap(arr[i],arr[j]);
    }
}

int main() {

    char arr[1000];
    cout<<"enter your information : "<<endl;
    cin.getline(arr,100);
    cout<<endl<<"reversal is :";
    reverseCharArray(arr);
    cout<<arr;
return (0);
}