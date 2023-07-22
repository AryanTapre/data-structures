#include<iostream>
using namespace std;
 
class ABC {
    private:
        mutable int x;
        int y;
        const int z = 50;

    public:

         //** ctor : old style constructor

        // ABC(int _x, int _y, int _z = 50) {
        //     this->x = _x;
        //     this->y = _y;
        //     this->z = _z;
        // }

         //** Initialization List
         ABC(int _x, int _y, int _z = 50): x(_x),y(_y),z(_z) {
                cout<<"initlalization list has been called"<<endl;
         }    

        // Main use of initialization list is to use Data Member that is declared CONSTANT






        // constant with memmber function, NOT allowed to modify data member
        int getX() const {
            x = 45; // Make Data member mutable to change it's value in constant funtion; only used at Time of Debugging...
            return this->x;
            // x = 45; not possible
        }
        
        void setX(int x, int z = 0) {
            this->x = x;
        }

        int getY() const {
            return this->y;
        }

        void setY(int _y) {
            this->y = _y;
        } 

        int getZ() const {
            return this->z;
        }

        void setZ(int _z) {
            this->y = _z;
        } 





      
};

  void printABC(ABC const *l) {
         cout<<"value of x: "<<l->getX()<<endl;
         cout<<"value of y: "<<l->getY()<<endl;   
         cout<<"Value of z:"<<l->getZ()<<endl;
  }

int main() {

    ABC const *abc = new ABC(1,2);
    // cout<<abc->setX();    not possible, Constant object will only call constant functions, NOT non-constant  functon like here i.e setX()
    
    printABC(abc);




    cout<<endl<<endl;

    const int x = 10;
    cout<<"value of x:"<<x<<endl;




            // CONSTANT WITH POINTERS------------------

    //1.CONST pointer, NON-CONST data.
        int* const _x = new int (96);
        *_x = 100;
        cout<<"value of _x : "<<*_x<<endl;
        int pop = 80;
        // _x = &pop;   not possible..


    //2. NON-CONST pointer, CONST data.
        int const *a = new int(100);
        cout<<"value of a:"<<*a<<endl;
       // *a = 11; not possible..
        int b = 23;
        a = &b;
        cout<<*a<<endl;  


    //3. CONST pointer, CONST data.
        int const * const _y = new int(500);
        cout<<"value of _y :"<<*_y<<endl;
        
        // *_y = 45; not possible
        // _y = &b;  not possible

  

    

return (0);
}