#include<iostream>
using namespace std;
 
class Param {
    public:
        int value;

        // operator overloading..    
        int operator+(Param &obj2) {
            int valueObj1 = this->value;
            int valueObj2 = obj2.value;
            return valueObj1 - valueObj2;
        }

        // Function overloading...
        void sum(int a, int b) {
            cout<<"sum function int b : ";
            cout<<(a+b)<<endl;
        }
        void sum(int a, float b) {
            cout<<"sum function float b : ";
            cout<<(a+b)<<endl;
        }
        void sum(float a, float b) {
            cout<<"sum function float a and float b :";
            cout<<(a+b)<<endl;
        }

};

int main() {

    Param obj1,obj2;
    obj1.value = 10;
    obj2.value = 8;

    int result = obj1+obj2;
    cout<<"result is = "<<result<<endl;

    obj1.sum(10,20);
    obj1.sum(10,21.20f);
    obj1.sum(100.1f,100.1f);

return (0);
}