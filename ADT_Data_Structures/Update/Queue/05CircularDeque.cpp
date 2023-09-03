// Doubly Ended Queue..

#include<iostream>
using namespace std;

class CircularDequeue {
    private:
        int size;
        int front;
        int rear;
        int* arr;

    public:
        CircularDequeue(int _size) : size(_size) {
            front = -1;
            rear = -1;
            arr = new int[size];
        }

        void push_front(int data) {
            if(front == -1 || front == rear+1) {
                cout<<"cannot insert from front.."<<endl;
                return;
            }
            else if(front == 0 && rear != size - 1) { // circular nature
                front = size-1;
                arr[front] = data;
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
            if(rear == size || rear == front-1) {
                cout<<"OverFlowed"<<endl;
            }
            else if(front == -1 && rear == -1) {
                front = 0;
                rear = 0;
                arr[rear] = data;
            }
            else if(rear == size-1 && front != 0 ) { // circular nature
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
            else if(front == size-1) { // circular nature
                arr[front] = -1;
                front = 0;

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
            else if(rear == 0) { // circular nature..
                arr[rear] = -1;
                rear = size-1;
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
 
    CircularDequeue* q = new CircularDequeue(5);
    q->push_back(1);
    cout<<"front:"<<q->getFront()<<endl;
    cout<<"rear:"<<q->getRear()<<endl;

    q->push_back(2);
    cout<<"front:"<<q->getFront()<<endl;
    cout<<"rear:"<<q->getRear()<<endl;

    q->push_back(3);
    cout<<"front:"<<q->getFront()<<endl;
    cout<<"rear:"<<q->getRear()<<endl;

    q->push_front(10);
    cout<<"front:"<<q->getFront()<<endl;
    cout<<"rear:"<<q->getRear()<<endl;

    q->push_front(90);
    cout<<"front:"<<q->getFront()<<endl;
    cout<<"rear:"<<q->getRear()<<endl;

    q->push_front(890);
    
    q->pop_front();
    cout<<"front:"<<q->getFront()<<endl;
    cout<<"rear:"<<q->getRear()<<endl;

    q->push_back(4556);
    cout<<"front:"<<q->getFront()<<endl;
    cout<<"rear:"<<q->getRear()<<endl;

    q->pop_front();
    cout<<"front:"<<q->getFront()<<endl;
    cout<<"rear:"<<q->getRear()<<endl;

    q->pop_front();
    cout<<"front:"<<q->getFront()<<endl;
    cout<<"rear:"<<q->getRear()<<endl;

    

return 0;
}