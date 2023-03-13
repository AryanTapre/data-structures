// replace all spaces with @ sign
#include<iostream>
using namespace std;

void replaceSpaces(char arr[]) {
    int i = 0;
    while(arr[i] != '\0') {
        if(arr[i] == ' ') 
            arr[i] = '@';
        i++;
    }
}

int main() {
 
    char arr[100];
    cout<<"your information : "<<endl;
    cin.getline(arr,100);
    replaceSpaces(arr);
    cout<<endl<<"result : "<<arr;

return (0);
}