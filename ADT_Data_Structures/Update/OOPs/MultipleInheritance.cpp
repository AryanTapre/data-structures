#include<iostream>
using namespace std;

class Device {
    public:
        string deviceType;
        string brandName;

        Device() {
            this->brandName = "device brandName";
        }
};

class Laptop {
    public:
        string brandName;
        Laptop() {
            this->brandName = "Laptop brandName";
        }
};

class Dell : public Device,public Laptop {
    public:
        
        // void print() {
        //     cout<<this.Laptop::->Laptop<<endl;
        //     cout<<this.Device::->brandName<<endl;
        // }

};

int main() {
 
    Dell d;
    // d.print();

    // ambiguous problem in multiple inheritance...
    cout<<d.Device::brandName;
    

return (0);
}