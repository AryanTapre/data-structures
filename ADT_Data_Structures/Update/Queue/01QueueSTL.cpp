#include<queue>
#include<iostream>
using namespace std;

int main() {

    queue<int> q;

    q.push(1);
    q.push(90);
    q.push(45);
    q.push(23);

    cout<<"front element:"<<q.front()<<endl;
    cout<<"back element : "<<q.back()<<endl;

    cout<<"Size of queue : "<<q.size()<<endl;

    // Removal...
    q.pop();
    cout<<"front element:"<<q.front()<<endl;
    cout<<"Size of queue : "<<q.size()<<endl;

    if (q.empty())
    {
        cout<<"queue is empty.."<<endl;
    } else {
        cout<<"queue is NOT empty.."<<endl;
    }
    

return 0;
}