// sort the stack..

#include<stack>
#include<iostream>
using namespace std;

void insertSorted(stack<int> s, int data) {
    if(s.top() >= data || s.empty()) {
        s.push(data);
        return;
    }

    int topData = s.top();
    s.pop();
    insertSorted(s,data);
    s.push(topData); // backtracking...
}


void sortStack(stack<int> &s) {
    if(s.empty()) {
        return;
    }

    int topData = s.top();
    s.pop();
    sortStack(s);
    insertSorted(s,topData);
}

int main() {
    
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

     sortStack(s);

    while(!s.empty()) {
        cout<<s.top()<<endl;
        s.pop();
    }

return 0;
}