#include<iostream>
#include<stack>
using namespace std;


int main() {

    stack<int> st;
    

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout<<"Size of stack is : "<<st.size()<<endl;
    st.pop();
    st.pop();
    cout<<"Size of Stack after popping Two elements : "<<st.size()<<endl;

    if(st.empty()) {
        cout<<"Stack is Empty.."<<endl;
    } 
    else {
        cout << "stack is NOT EMPTY.."<<endl;
    }

    // Printing The stack..
    cout<<endl<<"Printing the Stack Elements.."<<endl;
    while(!st.empty()) {
        cout<<st.top()<<endl;
        st.pop();
    }

return 0;
}