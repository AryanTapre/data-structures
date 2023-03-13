#include<iostream>
#include<queue>

using namespace std;

int main() {

    // max - heap
    priority_queue<int> maxi;

    // min - heap
    priority_queue<int , vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"Size of maxi -> "<<maxi.size()<<endl;

    cout<<"Total elements in maxi ->"<<endl;
    int n = maxi.size();
    for(int i = 0; i<n; i++) {

        cout<<maxi.top()<<endl;
        maxi.pop();
    }

    cout<<"Size of maxi -> "<<maxi.size()<<endl;
    cout<<endl<<"Is empty maxi ? ->"<<maxi.empty();

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    cout<<endl<<"Size of mini -> "<<mini.size()<<endl;

    cout<<"Total elements in mini ->"<<endl;
    int n2 = mini.size();
    for(int i = 0; i<n2; i++) {

        cout<<mini.top()<<endl;
        mini.pop();
    }

    cout<<"Size of mini -> "<<mini.size()<<endl;
    cout<<endl<<"Is empty mini ? ->"<<mini.empty();

    
}