// upper and lower case conversion..

#include<iostream>
using namespace std;

void toUpper(char arr[]) {
    int i = 0;
    while(arr[i] != '\0') {
        if(arr[i]!= ' ' && arr[i]-32 >= 65) {
            arr[i] = arr[i]-32;
        }
      
        i++;
    }
}

void toLower(char arr[]) {
    int i = 0;
    while(arr[i] != '\0') {

        if( arr[i]+32 <=123) {
            arr[i] = arr[i] + 32;
        }
       
        i++;
    }
}

int main() {
    cout<<"enter string : "<< endl;
    char arr[100];
    cin.getline(arr,100);
    toUpper(arr);
    cout<<"upper case : "<<arr;
    toLower(arr);
    cout<<endl<<"lower case : "<<arr;
return (0);
}