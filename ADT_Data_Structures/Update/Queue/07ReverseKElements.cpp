// Reverse the K elements..

#include<queue>
#include<stack>
#include<iostream>
using namespace std;

void reverseK(queue<int>& q, int k) {
    stack<int>s;
    int n = q.size();


    if(n<=0 || k>n) {
        return;
    }


    // push K elements onto stack..
    int count = 0 ;
    while(!q.empty()) {
        int temp = q.front();
        q.pop();

        s.push(temp);
        count++;

        if(count == k) break;
    }

    // pop stack to queue,,
    while(!s.empty()) {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    // Setting remaining n-k elements..
    count = 0;
    while(!q.empty() && n-k != 0) {
        int temp = q.front();
        q.pop();
        q.push(temp);

        count++;
        
        if(count == n-k) {
            break;
        }
    }

}


int main() {

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(7);
    q.push(11);
    q.push(78);

    reverseK(q,0);

    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }

return 0;
}