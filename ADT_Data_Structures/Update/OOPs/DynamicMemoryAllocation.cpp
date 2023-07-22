#include<iostream>
using namespace std;
 
int main() {
 
    int* age = new int;
    *age = 21;
    //cout<<*age;

    int* ages = new int[5];
    for(int i=0; i<5; i++) {
        cin>>ages[i];
    } cout<<endl;

    for(int i=0;i<5;i++) {
        cout<<ages[i]<<endl;
    }
   

    int** marks = new int*[5];
    for(int i=0; i<5; i++) {
        marks[i] = new int[5];
    }
    
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            marks[i][j] = 89;
        }
       
    }

    cout<<"2d array"<<endl;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }

return (0);
}