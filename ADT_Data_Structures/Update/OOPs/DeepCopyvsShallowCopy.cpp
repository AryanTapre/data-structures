#include<iostream>
using namespace std;
 
class Example {
    public:
    int x;
    int *y;

       
    // SHALLOW COPY : Default Dump constructor called by OS
    Example( const Example &obj)  {
        this->x = obj.x;
        this->y = obj.y;
    }


    // DEEP COPY..
    // Example(Example& obj) {
    //     this->x = obj.x;
    //     this->y = new int(*obj.y);
    // } 


    Example(int _x, int _y):x(_x),y(new int(_y)) {}

    void print() const  {
        cout<<"value of x:"<<this->x<<endl;
        cout<<"address of y:"<<this->y<<endl;
        cout<<"value of y :"<<*y<<endl<<endl;
    }

    ~Example() {
        delete y;
    }
};


int main() {
 

//    Example a(1,2);
//    a.print();

//    Example b = a;
//    b.print();

//    *b.y = 100; 
//    a.print();
//    b.print();


    Example* a = new Example(1,2);
    Example *b = a;
    a->print();
    delete a;

    b->print(); 




return (0);
}