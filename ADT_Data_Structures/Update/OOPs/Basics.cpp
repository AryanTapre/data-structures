#include<iostream>
using namespace std;

class Car {

    private:
        string name;
        string companyName;
        string color;
        float length;
        int airBags;

    public:
        string getName() {    // getter method
            return this->name;
        }
        void setName(string name) { // setter method
            this->name = name;
        }
        string getCompnayName() {
            return this->companyName;
        }
        void setCompanyName(string companyName) {
            this->companyName = companyName;
        }

        string getColor() {
            return this->color;
        }
        void setColor(string color) {
            this->color = color;
        }

        float getLength() {
            return this->length;
        }
        void setLength(float length) {
            this->length = length;
        }

        int getAirBags() {
            return this->airBags;
        }
        void setAirBags(int airBags) {
            this->airBags = airBags;
        }


        // constructor
        Car() {
            this->name = "NULL";
            this->airBags = 0;
            this->companyName = "NULL";
            this->length = 0;
            this->color = "NULL";
        }

        Car(string name, string companyName, string color, float length, int airBags) {
            this->name = name;
            this->companyName = companyName;
            this->color = color;
            this->length = length;
            this->airBags = airBags;
        }

        Car(Car &tempCar) {
            tempCar.name = this->name;
            tempCar.companyName = this->companyName;
            tempCar.color = this->color;
            tempCar.length = this->length;
            tempCar.airBags = this->airBags;
        }

        // destructor
        ~Car() {
            cout<<"destructor called for ";
            cout<<"car name :"<<this->name<<endl;
        }


};


int main() {
 
    // static object memory allocation..
    // Objects are created in Stack Memory
    // Automatic allocation and de-allocation of objects happens,,

    Car c1;
    c1.setName("xuv 700");
    c1.setColor("dark blue");
    c1.setAirBags(7);
    c1.setCompanyName("mahindra");
    c1.setLength(4.23);

    cout<<"name:"<<c1.getName()<<endl;
    cout<<"company :"<<c1.getCompnayName()<<endl;
    cout<<"color:"<<c1.getColor()<<endl;
    cout<<"AirBags:"<<c1.getAirBags()<<endl;
    cout<<"lenght:"<<c1.getLength()<<endl<<endl;
    // calling destructor automatically..
    
    // Dynamic Object Memory Allocation..
    // Objects are created in Heap Memory
    // Need to manually allocate and de-allocate memory inside Heap

    
    Car* c2 = new Car();
    c2->setName("datsun");
    c2->setColor("purl white");
    c2->setCompanyName("Nissan");
    c2->setLength(4);
    c2->setAirBags(0);

    cout<<"name:"<<c2->getName()<<endl;
    cout<<"company :"<<c2->getCompnayName()<<endl;
    cout<<"color:"<<c2->getColor()<<endl;
    cout<<"AirBags:"<<c2->getAirBags()<<endl;
    cout<<"lenght:"<<c2->getLength()<<endl;

    delete c2;   // calling destructor manually

return (0);
}