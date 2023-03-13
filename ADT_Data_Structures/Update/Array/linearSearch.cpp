#include<iostream>
#include<vector>
using namespace std;

bool find(int a[],int key,int size) {
    for(int i=0;i<size;i++) {
        if(a[i] == key) {
            return true;
        }
    }
    return false;
} 

int main() {

    int a[5],key;
    cout<<"enter values in array"<<endl;
    for(int i=0;i<5;i++) {
        cin>>a[i];
    }
    cout<<endl<<"enter key to find:";
    cin>>key;

    cout<<endl<<"your key found:"<<find(a,key,5);
    int rows=3,cols=3;

  
    
 
return (0);
}