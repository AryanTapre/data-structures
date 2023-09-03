// Settle The Bottom
/*
    problem statement:
        Set the top element of stack to the Bottom (i.e the first element.. first push)
*/

#include<stack>
#include<iostream>
using namespace std;

void settleBottomHelper(stack<int>& s, int &topData) {
    if(s.empty()) {
        s.push(topData);
        return;
    }

    int saveTop = s.top();
    s.pop();
    settleBottomHelper(s,topData);
    s.push(saveTop); // backtracking...

}

void settleBottom(stack<int>& s) {
    int top = s.top();
    s.pop();

    settleBottomHelper(s,top);
}

int main() {

    stack<int> s;
    s.push(8);
    s.push(10);
    s.push(11);
    s.push(22);
    s.push(90);

    settleBottom(s);

    while(!s.empty()) {
        cout<<s.top()<<endl;
        s.pop();
    }

return 0;
}