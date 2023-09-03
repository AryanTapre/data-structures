#include<iostream>
using namespace std;

class Stack {
    private:
        int* arr;
        int top;
        int size;

    public:
        Stack(int _size) : size(_size) {
            arr = new int[size];
            top = -1;
        }

        void push(int data) {
            if(size - top > 1) {
                top++;
                arr[top] = data;
            } 
            else {
                cout <<"OverFlowed.."<<endl;
            }
        }

        void pop() {
            int R = size - top;
            int statusTop = size - R;

            if(statusTop == -1) {
                cout << "UnderFlowed.."<<endl;
                return;
            }
            else {
                arr[top] = -1;
                top--;
            }
           
        }

        bool isEmpty() {
            if(this->top == -1) {
                return true;
            }
            else {
                return false;

            }
        }

        int getTop() {

            if(top == -1) {
                return -1;
            }
            return arr[top];
        }

        int length() {
            if(top == -1) {
                return -1;
            }
            return (top+1);
        }

};

int main() {
 
    Stack* stack = new Stack(5);
    
    stack->push(10);
    stack->push(20);
    stack->push(30);
    stack->push(40);
    stack->push(50);


    cout<<"length of stack : "<<stack->length()<<endl;

    cout<<endl<<"top element : "<<stack->getTop()<<endl;

    cout<<"printing stack elements.."<<endl;
    while(!stack->isEmpty()) {
        cout<<stack->getTop();cout<<endl;
        stack->pop();
    }

    cout<<endl<<"top element : "<<stack->getTop()<<endl;

    cout<<"is stack empty : "<<stack->isEmpty()<<endl;

return 0;
}

