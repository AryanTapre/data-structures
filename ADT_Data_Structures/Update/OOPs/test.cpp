#include<iostream>
using namespace std;

class A {
    public:
         A() {
            cout<<"A constructor called"<<endl;
        }
        virtual ~A() {
            cout<<"A destructor called"<<endl;
        }
};

class B : public A {
    public:
        B() {
            cout<<"B constructor called"<<endl;
        }
        ~B() {
            cout<<"B destructor called"<<endl;
        }
};

int main() {
 
    B* b = new B();
    delete b;

return 0;
}