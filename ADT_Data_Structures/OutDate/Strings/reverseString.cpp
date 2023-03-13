// to reverse a given string...

#include<iostream>
using namespace std;

int getLength(char name[]) {
    int i;
    for( i = 0; name[i] != '\0'; i++) {
        continue;
    }
    return i;
}

void getReverse(char name[],int n) {

        int s = 0;
        int e = n-1;

        while(s<=e){
            swap(name[s++],name[e--]);
        }
}

int main() {

    char name[20];

    cout<<"Enter your name :";
    cin>>name;

    int n = getLength(name);
    getReverse(name,n);
    cout<<endl<<"reverse is : "<<name;

    return 0;
}