#include<set>
#include<iostream>
using namespace std;
 
int main() {
 
    set<int> s; // set with ascending order sorting.
    set<int,greater<int>> d; // set with descending order sorting.

    cout<<endl<<"printing set in ascending order of s"<<endl;
    s = {10,10,5,6,8,90};   // only unique elements are allowed
    for(auto i : s) {
        cout<<i<<" ";
    }
    
    cout<<endl<<"printing set in descending order of d"<<endl;
    d = {10,10,5,6,8,90};
    for(auto i : d) {
        cout<<i<<" ";
    }
    auto get = d.count(10); // defines Whether element present or NOT in the SET..
    cout<<"counter:"<<get<<endl;

    // iterators
    set<int> :: iterator it;
     
    it = s.begin();
    cout<<endl<<"element at first of s :"<<*it<<endl;
    cout<<"element at second of s :"<<*(it)+1<<endl;

    cout<<endl<<"size of s:"<<s.size()<<endl;
    it = s.end();
    cout<<"element at last of s:"<<*it<<endl;

    
    // modifiers.
    cout<<endl<<"modifiers"<<endl;

    s.insert(s.end(),91);
    for(auto i = s.begin(); i!=s.end(); ++i) {
        cout<<*i<<" "; 
    }

    s.erase(91); // s.erase(s.end());
    cout<<endl;
    for(auto i = s.begin(); i!=s.end(); ++i) {
        cout<<*i<<" "; 
    }


    // searching elements
    cout<<endl<<endl<<"Searching elements"<<endl;
    if (s.count(5))
    {
        cout<<"5 found"<<endl;
    } else {
        cout<<"5 NOT found"<<endl;
    }

    // getting search element index
    auto position = s.find(5);
    cout<<*position<<endl;

    
    
    s.clear(); // making set clear
    if(s.empty()) {
        cout<<endl<<"s is empty"<<endl;
    } else {
        cout<<endl<<"s is NOT empty"<<endl;
    }


return (0);
}