/*          creating double pointers in c++
            CreatedBy @AryanTapre
            on date  27.04.2023
    */

#include<iostream>
using namespace std;
 
int main() {
    int age = 20;
    int* ptr1 = &age;  // single pointer.
    int* * ptr2 = &ptr1; // double pointer.

    cout<<"value of age :"<<age<<endl;
    cout<<"address of age :"<<&age<<endl;

    cout<<"value of ptr1 :"<<ptr1<<endl;
    cout<<"address of ptr1 :"<<&ptr1<<endl;

    cout<<"value of ptr2 :"<<ptr2<<endl;
    cout<<"address of ptr2 :"<<&ptr2<<endl;

    cout<<"ptr1 pointing to : "<<*ptr1<<endl;
    cout<<"ptr2 pointing to :"<<* ptr2<<endl;

    // double pointer are used to create 2d Array..

    // creating 2 * 3 array.
    cout<<endl<<endl<<"--------------------->"<<endl;
    cout<<"created 2d array using double pointer"<<endl;
    int* *arr;
    arr = new int*[2]; // dynamically creating rows here

    for(int i=0; i<3; i++) {
        arr[i] = new int[3]; 
    }

    for(int i=0; i<2; i++) {
            for(int j=0; j<3; j++) {
                    arr[i][j] = 101;
            }
    }

    for(int i=0; i<2; i++) {
            for(int j=0; j<3; j++) {
                    cout<<arr[i][j]<<" "; 
            }
            cout<<endl;
    }


return (0);
}