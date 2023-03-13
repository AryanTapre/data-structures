
#include<iostream>
#include<set>

using namespace std;

int main() {

    set<int> s;

    // duplicate values are not allowed..
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(59);
    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(23);

    for(auto i : s) {
        cout<<i<<endl;
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout<<endl;


    for(auto i : s) {
        cout<<i<<endl;
    }
    cout<<endl;
    

    cout<<"100 is present or Not ->"<<s.count(100);
    cout<<endl<<"5 is present or Not ->"<<s.count(5);

}