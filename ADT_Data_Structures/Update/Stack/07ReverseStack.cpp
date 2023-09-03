#include<stack>
#include<vector>
#include<iostream>
using namespace std;

void settleBottom(stack<int>& s, int &topData) {
    if(s.empty()) {
        s.push(topData);
        return;
    }

    int save = s.top();
    s.pop();
    settleBottom(s,topData);
    s.push(save); // backtracking..
}

void reverseMe(stack<int>& s) {
    if(s.empty()) {
        return;
    }

    int target = s.top();
    s.pop();

    reverseMe(s);

    settleBottom(s,target);


}

int main() {
    
    stack<int> s;
   
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    reverseMe(s);

  
 while(!s.empty()) {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
   return 0;
}