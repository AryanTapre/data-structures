#include<iostream>
using namespace std;


class Car {
    public:
        int x;
        virtual void run() = 0;

};

class B : public Car {
    public:
        void setX(int d) {
            this->x = d;
        }
        int getX() const {
            return this->x;
        }

        void run() {
            cout<<"in B sir..";
        }    
};

int main() {

   Car* car = new B();
   car->run();
   cout<<car->x;
  
return (0);
}