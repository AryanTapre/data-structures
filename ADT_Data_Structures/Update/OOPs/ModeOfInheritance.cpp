#include<iostream>
using namespace std;

class Animal {
    protected:
        int age;
    
        Animal() {
            this->age = 3;
        }
};

class Dog : private Animal {
    public:
        void printAge() {
            cout<<this->age;
        }
};

int main() {

    Dog* d = new Dog();
    d->printAge();
    return (0);
}
