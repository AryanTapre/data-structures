// reversing a String...

// Use stack to Reverse it..

#include<iostream>
#include<stack>
using namespace std;

int main() {
    
    stack<char> st;
    string data = "aryan";

    for(int i=0; i<data.length(); i++) {
        st.push(data.at(i));
    }

    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }

return 0;
}