#include<iostream>
using namespace std;

class Queue {
  
        int* arr;
        int size;
        int front;
        int rear;
    
    public:
        Queue(int _size) : size(_size) {
            arr = new int[size];
            front = 0;
            rear = 0;
        }

        void push(int _data) {
            if(rear == size) {
                cout<<"queue is overflowed.."<<endl;
                return;
            }

            // Insert the data..
            arr[rear] = _data;
            rear = rear + 1;
        }

        void pop() {
            if(front == rear) {
                cout<<"Queue is UnderFlowed.."<<endl;
                return;
            }
            // pop the data
             arr[front] = -1;
             front = front + 1;

             if(front == rear) {
                front = 0;
                rear = 0;
             } 
        }

        int getSize() {
           return (rear-front);
        }

        bool isEmpty() {
            if(front == rear) {
                return true;
            } 
            return false;
        }

        int getFront() {
            if(front == rear) {
                cout<<"queue is empty"<<endl;
               
            }
            else {
                return arr[front];
            }
        }

        int getRear() {
            if(front == rear) {
                cout<<"queue is empty"<<endl;
            }
            else {
                if(rear == size)
                return arr[rear-1];
            }
            
        }

};

int main() {
 
    Queue* queue = new Queue(5);
    queue->push(90);
    queue->push(10);
    queue->push(70);
    queue->push(9);
   

    cout<<"size:"<<queue->getSize()<<endl;
    cout<<"front:"<<queue->getFront()<<endl;
    cout<<"rear:"<<queue->getRear()<<endl;
    
    if(queue->isEmpty()) {
        cout<<"empty.."<<endl;
    } else {
        cout<<"not empty"<<endl;
    }

    queue->pop();
    queue->pop();
    queue->pop();
    queue->pop();
     queue->pop();
    
    cout<<"front:"<<queue->getFront()<<endl;
    cout<<"rear:"<<queue->getRear()<<endl;
    cout<<"size:"<<queue->getSize()<<endl;

    

return 0;
}