#include<iostream>
using namespace std;

class Stack {
    int* arr;
    int size;
    int top;

    public:
        Stack(int size) {
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void getData() {
            cout <<"top: "<<this->top<<endl;
            cout<<"Size : "<<this->size<<endl;
        }

};
int main() {
 
    Stack stack = new Stack(10);
    stack.getData();

return 0;
}