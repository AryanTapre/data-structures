#include<iostream>
using namespace std;
 
class ABC {
    public:
          static int x,y;
    
        static void print() {
            cout<<x<<" "<<y<<" "<<endl;
            x = 78;
            y = 82;
        }
    
};

int ABC::x = 100;
int ABC::y = 200;


int main() {
 
    
    // ABC a = {1,2};
    // ABC b = {30,40};
    // a.print();
    // b.print();

    ABC a;
    ABC::x = 20;
    ABC::y = 100;
    a.print();

    ABC* abc = new ABC();
    ABC::x = 0;
    ABC::y = 0;
    ABC::print();
    ABC::print();





return (0);
}