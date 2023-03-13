#include<iostream>
#include<stack>

using namespace std;

int main() {

    stack<string> s;

    cout<<"Size of stack ->"<<s.size()<<endl;
    cout<<"is stack empty? ->"<<s.empty()<<endl;

    s.push("aryan");
    s.push("victus");
    s.push("harshad");
    s.push("ashvin");

    cout<<"Stack elements ->"<<endl;
    while(!s.empty()) {
        cout<<s.top()<<endl;
        s.pop();
    }
}