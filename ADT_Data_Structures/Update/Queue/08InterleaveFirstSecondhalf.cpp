// InterLeave the First and Second Half of Queue..

// Q -->               10 20 30 40 50 60 70 80
// interLeaved -->     10 50 20 60 30 70 40 80

#include<iostream>
#include<queue>
using namespace std;

void interleave(queue<int> &q) {

    queue<int> q1;   
    int n = q.size();
    int count = 0;

    if(q.empty() || n == 1) {
        cout<<"queue size is not Satisfactory"<<endl;
        return;
    }

    while(!q.empty()) {
        q1.push(q.front());
        q.pop();
        count++;

        if(count == n/2) 
            break;
    }

    // interleaving 
    while(!q.empty() && !q1.empty()) {
        int first = q1.front();
        q1.pop();

        q.push(first);

        int second = q.front();
        q.pop();
        q.push(second);
    }

    // odd case..
    if(n&1) {
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

int main() {
 
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
   
    interleave(q);

    cout<<"printing the Queue:"<<endl;

    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }

return 0;
}