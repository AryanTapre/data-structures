// Single level inheritance..
#include<iostream>
using namespace std;

class Laptop {
    protected:
        float weight;
        string name;
        string brandName;
        string ram;
        string rom;   
};

class Dell : private Laptop {
    public:
        Dell(){
            this->name = "inspiron15 3000 series";
            this->brandName = "dell";
            this->ram = "4";
            this->rom = "1tb";
        }

        void print() {

            cout<<"name:"<<this->name<<endl;
            cout<<"Brand name:"<<this->brandName<<endl;
            cout<<"weight:"<<this->weight<<endl;
            cout<<"RAM:"<<this->ram<<endl;
            cout<<"ROM:"<<this->rom<<endl;
        }
};

int main() {
 
    Dell* d = new Dell; 
    d->print()
    
return (0);
}