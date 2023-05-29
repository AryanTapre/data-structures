#include<unordered_set>
#include<array>
#include<iostream>
using namespace std;
 
int main() {

    // printing is done from Right to Left order
    unordered_set<int> us = {50,90,10,0,10};
    for(auto i = us.begin(); i!= us.end(); ++i) {
        cout<<*i<<" ";
    }

    unordered_set<int> :: iterator it = us.begin();
    us.insert(it,1);
    cout<<endl;
    for(auto i = us.begin(); i!= us.end(); ++i) {
        cout<<*i<<" ";
    }

    
    // finding duplicates from us.
     array<int,9> s = {90,56,0,90,45,1,3,4,56};

     unordered_set<int> duplicate;
     unordered_set<int> intSet;

     for(int i=0; i<s.size(); i++) {

        if(intSet.find(s[i]) == intSet.end()) {
            intSet.insert(s[i]);
        } else {
            duplicate.insert(s[i]);
        }

     }

     cout<<endl<<"duplicates are:"<<endl;
      for(auto i = duplicate.begin(); i!= duplicate.end(); ++i) {
        cout<<*i<<" ";
    }

return (0);
}