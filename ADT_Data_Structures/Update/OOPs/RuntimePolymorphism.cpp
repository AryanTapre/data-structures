#include<iostream>
using namespace std;
 
class Animal {
    public:
        Animal() {
            cout<<"animal object has been created.."<<endl;
        }

        virtual  void speak() {
            cout<<"Speaking.."<<endl; 
        }
};

class Dog : public Animal {
    public:
        Dog() {
            cout<<"dog object has been created.."<<endl;
        }

        // overriding speak() method..
        void speak() {
            cout<< "Barking.."<<endl;
        }

};

int main() {
 
    Animal* animal = new Animal();
    animal->speak();

    Dog* dog = new Dog();
    dog->speak();

    // UPCASTING..
        // here, abstraction is used on right hand side
        // we have an reference of animal class but for what implementation we don't know
        // e.g Sort* sort = new QuickSort() don't know implementation for sort will be decided at run time
    animal = new Dog();
    animal->speak();

   // DOWN CASTING..
    dog = (Dog*)new Animal();
    dog->speak();


  

    

return (0);
}

//encapsulation is subset of Abstraction