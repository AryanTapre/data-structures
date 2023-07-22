#include<iostream>
using namespace std;

class A {
    public:
        A() {
            cout<<"A created.."<<endl;
        }

       virtual ~A() {
            cout<<"A destructor called.."<<endl;
        }
};

class B : public A {

    private:
        int *x;

    public:


        B() {
            x = new int(100);
            cout<<"B created.."<<endl;
        }

        ~B() {
            cout<<"B destructor called.."<<endl;
            delete x;
        }

        void getX() {
            cout<<*x<<endl;
        }

};

int main() {
 
    A* a = new A();
    B* b = new B();
    delete a;
    b->getX(); 
    delete b;

    b->getX(); 

return (0);
}