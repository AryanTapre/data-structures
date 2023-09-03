// Leetcode 155 MIN STACK..

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class MinStack {
    public:
        vector<pair<int,int>> v;

        void push(int val) {
            if(v.empty()) {
                v.push_back(make_pair(val,val));
            }
            else {
                v.push_back(make_pair(val,min(v.back().second,val)));
            }
        }

        void pop() {
            v.pop_back();
        }

        int top() {
            return v.back().first;
        }

        int getMin() {
            return v.back().second;
        }

};

int main() {

    MinStack* minStack = new MinStack();
    minStack->push(10);
    minStack->push(0);
    minStack->push(70);
    minStack->push(8);

    cout<<minStack->top()<<endl;
    cout<<minStack->getMin()<<endl;

    minStack->pop();

    cout<<minStack->top()<<endl;
    cout<<minStack->getMin()<<endl;


return 0;
}