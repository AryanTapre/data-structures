#include<iostream>
using namespace std;

class CircularQueue {
    private:
        int size;
        int front;
        int rear;
        int* arr;
    
    public:
        CircularQueue(int size) :size(size) {
            front = -1;
            rear = -1;
            arr = new int[size];

        }

        void push(int data) {

            if((front == 0 && rear == size-1) || (rear == front-1)) { // over flow Condition..
                cout<<"Queue is OverFlowed.."<<endl;
            }
            else if(front == -1 && rear == -1) { // single element(first time inserting)..
                front++;
                rear++;
                arr[rear] = data;
            }
            else if(rear == size-1 && front != 0) { // Circular Nature Maintaining..
                rear = 0;
                arr[rear] = data;
            } 
            else { // Normal Case..
                rear++;
                arr[rear] = data;
            }
        }

        void pop() {
            if(front == -1 && rear == -1) { // underflow..
                cout<<"Queue is UnderFlowed.."<<endl;
            }
            else if(front == rear) { // single element..
                arr[front] = -1;
                front = -1;
                rear = -1;
            }
            else if(front == size-1) { // circular nature..
                front = 0;
            }
            else {  // Normal case..
                arr[front] = -1;
                front++;
            }
        }

        int getSize() {
            int currentSize;

            if(front == -1 && rear == -1) {
                currentSize = 0;
            } else {
                currentSize = (rear - front) + 1;
            }
            return currentSize;
        }

        bool isEmpty() {
            bool queueChecker = true;
            if(front != -1 && rear != -1) {
                queueChecker = false;
            }
            return queueChecker;
        }

        int getFront() {
            int data;

            if(!isEmpty()) {
                data = arr[front];
              
            } 
            else {
                data = -1;
            }
            return data;

        }

        int getRear() {
            int data;

            if(!isEmpty()) {
                data = arr[rear];
            }
            else {
                data = -1;
            }
            return data;
        }

};

int main() {
 
    CircularQueue* q = new CircularQueue(5);
    cout<<q->isEmpty()<<endl;
    cout<<q->getFront()<<endl;
    cout<<q->getRear()<<endl;

    cout<<endl<<endl;
    q->push(10);
    q->push(20);
    q->push(30);
    q->push(50);

    cout<<"front:"<<q->getFront()<<endl;
    cout<<"Rear:"<<q->getRear()<<endl;

    cout<<"Size of Queue : "<<q->getSize()<<endl;
    q->pop();
    q->pop();
    q->pop();
    q->pop();
    cout<<"Size of Queue : "<<q->getSize()<<endl;

    if(q->isEmpty()) {
        cout<<"Queue is empty.."<<endl;
    } else {
        cout<<"Queue is NOT empty.."<<endl;
    }


return 0;
}