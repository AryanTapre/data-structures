#include<iostream>
using namespace std;

class Car {
    protected:
        int doors;
        int cc;
};

class Mahindra: public Car {
    protected:
        string vehicleType;
};

class Xuv700 : public Mahindra {
    protected: 
        int fuelCapacity;
        int tyreSize;
    public:
        Xuv700() {

            this->cc = 2200;
            this->doors = 5;
            this->tyreSize = 18;
            this->fuelCapacity = 70;
            this->vehicleType = "suv";
        }

        void getCarDetails() {
            
            cout<<this->cc<<endl;
            cout<<this->doors<<endl;
            cout<<this->tyreSize<<endl;
            cout<<this->vehicleType<<endl;
            cout<<this->fuelCapacity<<endl;

        }

};

int main() {

    Xuv700* xuv700 = new Xuv700;
    xuv700->getCarDetails();

return (0);
}