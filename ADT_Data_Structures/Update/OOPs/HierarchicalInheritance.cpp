#include<iostream>
using namespace std;
 
class Vehicle {
    public:
        Vehicle() {
            cout<<"this is vehicle class"<<endl;
        }
};

class Car :  public Vehicle {
    public:
        Car() {
            cout<<"this is car class"<<endl;
        }
};

class Truck : public Vehicle {
    public:
        Truck() {
            cout<<"This is truck class"<<endl;
        }
};

class Scorpio : public Car {
    public:
        Scorpio() {
            cout<<"This is an Scorpio class..."<<endl;
        }
};

int main() {
 
    Scorpio* scorpio = new Scorpio;
    Truck* truck = new Truck;
    Car* car = new Car;
    Vehicle* vehicle = new Vehicle;

return (0);
}