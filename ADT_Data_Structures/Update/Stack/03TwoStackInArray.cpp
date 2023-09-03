// Implementing Two stacks in Array....

#include<iostream>
using namespace std;

class Stack {
    private:
        int* arr = nullptr;
        int size;
        int stack1Top;
        int stack2Top;
    
    public:
            // Defining Ctor
        Stack(int _size) : size(_size) {
            arr = new int[size];
            this->stack1Top = -1;
            this->stack2Top = size;

            // Do Not Do.. in interviews
            for(int i=0; i<size; i++) {
                arr[i] = 0;
            }
        }

        void pushStack1(int data) {
            if(this->stack2Top - this->stack1Top == 1) {
                cout <<"OverFlowed IN stack1.."<<endl;
                return;
            } 
            else {
                stack1Top++;
                arr[stack1Top] = data;
            }
        }  

        void pushStack2(int data) {
             if(this->stack2Top - this->stack1Top == 1) {
                cout <<"OverFlowed IN stack2.."<<endl;
                return;
            }
            else {
                stack2Top--;
                arr[stack2Top] = data;
            }
        }

        void popStack1() {
            if(stack1Top == -1) {
                cout<<"UnderFlowed IN stack1.."<<endl;
                return;
            }
            else {
                arr[stack1Top] = 0;
                stack1Top--;
            }
        }
        void popStack2() {  
            if(stack2Top == this->size) {
                cout<<"UnderFlowed IN stack2.."<<endl;
                return;
            }
            else {
                arr[stack2Top] = 0;
                stack2Top++;
            }
        }

        void printStatus() {
            cout<<"top1 : "<<this->stack1Top<<endl;
            cout<<"top2 : "<<this->stack2Top<<endl;

            for(int i=0; i<size; i++) {
                cout<<arr[i]<<" ";
            }
            cout<<endl<<endl;

        }

};

int main() {
 
    Stack* stack = new Stack(10);
    stack->printStatus();

    stack->pushStack1(10);
    stack->printStatus();

    stack->pushStack1(20);
    stack->printStatus();

    stack->pushStack1(30);
    stack->printStatus();

    stack->pushStack1(40);
    stack->printStatus();

    stack->pushStack1(50);
    stack->printStatus();

    
    stack->pushStack2(98);
    stack->printStatus();

    stack->pushStack2(42);
    stack->printStatus();

    stack->pushStack2(65);
    stack->printStatus();

    stack->pushStack2(9878);
    stack->printStatus();
   

    stack->pushStack2(1);
    stack->printStatus();

    stack->popStack1();
    stack->printStatus();

    stack->popStack1();
    stack->printStatus();

    stack->popStack1();
    stack->printStatus();

    stack->popStack2();
    stack->printStatus();

     stack->popStack2();
    stack->printStatus();

     stack->popStack2();
    stack->printStatus();

     stack->popStack2();
    stack->printStatus();

     stack->popStack2();
    stack->printStatus();
   
     stack->popStack2();
    stack->printStatus();

     stack->popStack1();
    stack->printStatus();

     stack->popStack1();
    stack->printStatus();

return 0;
}