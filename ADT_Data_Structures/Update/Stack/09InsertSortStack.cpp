// insert an element in Sorted stack....

#include<stack>
#include<iostream>
using namespace std;


void insertData(stack<int> &s, int data) {
    if(s.top() >= data || s.empty()) {
        s.push(data);
        return;
    }

    int topData = s.top();
    s.pop();
    insertData(s,data);
    s.push(topData);
}

int main() {

    stack<int> s;
    s.push(8);
    s.push(6);
    s.push(4);
    s.push(2);

    

    insertData(s,5);

    cout<<"before.."<<endl;
    while(!s.empty()) {
        cout<<s.top()<<endl;
        s.pop();
    }

return 0;
}