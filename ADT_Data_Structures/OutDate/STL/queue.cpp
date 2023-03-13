
#include<iostream>
#include<queue>
using namespace std;

void showQueue(queue<string> q) {

    queue<string> g = q;

    while(!g.empty()) {
        cout<<g.front()<<endl;
        g.pop();
    }
}

int main() {

    queue<string> q;

    q.push("Aryan");
    q.push("Tapre");
    q.push("Harshad");
    q.push("Bhushan");

    cout<<endl<<"Front element ->"<<q.front();
    cout<<endl<<"Back element ->"<<q.back();

    int temp = q.size();

    cout<<endl<<"Total elements in Queue->"<<endl;
    showQueue(q);
    
    cout<<endl<<"Size of Queue before popping -> "<<q.size()<<endl;
    q.pop();
    showQueue(q);
    cout<<endl<<"Size of Queue after popping -> "<<q.size()<<endl;

}