// Doubly Ended Queue..

#include<iostream>
using namespace std;

class Dequeue {
    private:
        int size;
        int front;
        int rear;
        int* arr;

    public:
        Dequeue(int _size) : size(_size) {
            front = -1;
            rear = -1;
            arr = new int[size];
        }

        void push_front(int data) {
            if(front == -1) {
                cout<<"cannot insert from front.."<<endl;
                return;
            }
            else {
                front--;
                if(front != -1) {
                    arr[front] = data;
                } 
                else {
                    cout<<"cannot insert from front.."<<endl;
                }

            }
        }

        void push_back(int data) {
            if(rear == size) {
                cout<<"OverFlowed"<<endl;
            }
            else if(front == -1 && rear == -1) {
                front = 0;
                rear = 0;
                arr[rear] = data;
            }
            else {
                rear++;
                arr[rear] = data;
            }
        }

        void pop_front() {
            if(front == -1 && rear == -1) {
                cout<<"can not pop from front.."<<endl;
            }
            else if(front == rear) {
                arr[front] = -1;
                front = -1;
                rear = -1;
            }
            else {
                arr[front] = -1;
                front++;
            }
        }

        void pop_back() {
            if(front == -1 && rear == -1) {
                cout<<"can't pop from back"<<endl;
            } 
            else if(front == rear) {
                arr[rear] = -1;
                front = -1;
                rear = -1;
            }
            else {
                arr[rear] = -1;
                rear--;
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

};

int main() {
 
    Dequeue* q = new Dequeue(5);
    cout<<q->isEmpty()<<endl;
    cout<<"size:"<<q->getSize()<<endl;
    q->pop_back();

    cout<<endl<<endl;
    q->push_back(10);
    q->push_back(20);
    q->push_back(30);
    q->pop_front();
    q->push_front(100);
    
    cout<<"front:"<<q->getFront()<<endl;
    cout<<"rear:"<<q->getRear()<<endl;

    cout<<"size:"<<q->getSize()<<endl;

    q->pop_back();
    q->pop_back();
    cout<<"empty:"<<q->isEmpty()<<endl;
    q->pop_back();

     cout<<"size:"<<q->getSize()<<endl;
     cout<<q->isEmpty()<<endl;

return 0;
}