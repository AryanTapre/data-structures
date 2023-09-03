// Reverse the Queue..

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseUsingStack(queue<int> &q) {
    stack<int> s;

    // Popping from Queue and Pushing onto Stack..
    while(!q.empty()) {
        int element = q.front();
        q.pop();

        s.push(element);
    }

    // popping elements from the Stack..
    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

void reverseUsingRecursion(queue<int> &q) {
    if(q.empty()) {
        return;
    }

    int save = q.front();
    q.pop();
    reverseUsingRecursion(q);

    q.push(save);
}
 
int main() {

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

   // reverseUsingStack(q);
    reverseUsingRecursion(q);

    while(!q.empty()) {
        cout<< q.front()<<" ";
        q.pop();
    }

return 0;
}