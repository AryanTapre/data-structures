// Find the Middle Element from Stack, Without Popping it's elements..


#include<iostream>
#include<stack>
using namespace std;

int getMiddleElement(stack<int> &s, int &totalSize) {
    if(s.size() == (totalSize/2) + 1) {
       return s.top();
    }

    int saveTop = s.top();
    s.pop();

    return getMiddleElement(s,totalSize);
    

    // backTracking..
    s.push(saveTop);
//    return r;
     
}

int main() {
 
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);

    int sizet = s.size();
    cout<<getMiddleElement(s,sizet);
  


return 0;
}