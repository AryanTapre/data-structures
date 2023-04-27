/*  creating a generic function that accept any value and returns corresponding address of it.
        created by  @Aryantapre
        on date 27.04.2023
*/

#include<iostream>
using namespace std;
 
    int & returnReference(int& value) {
            return value;
    }

int main() {

    int age = 20;
    cout<<"before--------->"<<endl;
    cout<<"value of age:"<<age<<endl;
    cout<<"address of age:"<<&age<<endl;

    int& getAge = returnReference(age);

    cout<<"after----------->"<<endl;
    cout<<"value of getAge : "<<getAge<<endl;
    cout<<"address of getAge:"<<&getAge<<endl;

    


return (0);
}