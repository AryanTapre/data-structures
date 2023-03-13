#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main() {

    vector<int> v;
    vector<int> :: iterator ptr;
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;

    v.push_back(1);
    v.push_back(2);
    for(ptr = v.begin();ptr<v.end();ptr++) {
        cout<<*ptr<<" ";
    }
    cout<<endl;
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
    cout<<"max size of v:"<<v.max_size()<<endl;
    
    ptr = v.begin();
    v.insert(ptr,200);
    cout<<"contents:"<<endl;
    for(auto i : v) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"accessing first element : "<<v.front()<<endl;
    cout<<"accessing last element : "<<v.back()<<endl;

    // clearing all elements from the vector..
    v.clear();
    cout<<endl<<"size of v after clearing:"<<v.size()<<endl;

    for(int i=0;i<10;i++) {
        v.push_back(i);
    }
    cout<<endl<<"contents:"<<endl;
    for(ptr = v.begin();ptr < v.end(); ptr++) {
        cout<<*ptr<<" ";
    }
    cout<<endl;

    v.erase(v.begin());
    cout<<endl<<"contents:"<<endl;
    for(ptr = v.begin();ptr < v.end(); ptr++) {
        cout<<*ptr<<" ";
    }
return (0);
}
