// find lenght of an string..

#include<iostream>
using namespace std;

int getLength(char name[]) {
    int i;
    for( i = 0; name[i] != '\0'; i++) {
        continue;
    }
    return i;
}

int main() {

    char name[20];

    cout<<"Enter your name :";
    cin>>name;

    cout<<endl<<"Length of your name is :"<<getLength(name);

    return 0;
}