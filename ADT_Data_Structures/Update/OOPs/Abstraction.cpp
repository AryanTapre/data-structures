#include<iostream>
using namespace std;
 
class Container {

    public:
    class GrandVitara {

        protected:
            string groundClearence;
            string fourBy4;
        public:
            GrandVitara() {
                this->groundClearence = "195mm";
                this->fourBy4 = "yes";
            }    
            void print() {
                cout<<this->groundClearence<<endl;
                cout<<this->fourBy4<<endl;
            }
    };

    class Swift {

        protected:
            string groundClearence;
            string fourBy4;
        public:
            Swift() {
                this->groundClearence = "170mm";
                this->fourBy4 = "no";
            }    
            void print() {
                cout<<this->groundClearence<<endl;
                cout<<this->fourBy4<<endl;
            }

    };

};


// PLEASE NOTE:
// Here Abstraction is a subset of Encapsulation..
// e.g A truck with contaner of MarutiSuzuki, we know that it's container of MarutiSuzuki
//    (Encapsulation) but
// we don't know what's inside it (meaning that, which Car either GrandVitara,Ertiga,Swift and 
//  and so on..) (Abstraction).. 


// Abstraction is achieving Generalization..
// Encapsulation is wrapping data and methods into an single entity..


/*
              -----CONTAINER-----------------------
                   |                        |
                   GrandVitara              Swift
                   |                        |
                   groundClearence          groundClearence
*/    

int main() {
 
    //Container* container = new container();
    Container::GrandVitara* gv = new Container::GrandVitara();
    gv->print();

    Container::Swift* swift = new Container::Swift;
    swift->print();

    

return (0);
}