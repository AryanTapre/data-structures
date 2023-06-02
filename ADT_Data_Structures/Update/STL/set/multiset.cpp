#include<set>
#include<iostream>
using namespace std;
 
int main() {
    
    multiset<int> ms;

    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(70);
    ms.insert(40);
    
    for(auto i : ms) {
        cout<<i<<" ";
    }

    ms.erase(10);
    cout<<endl;
    for(auto i : ms) {
        cout<<i<<" ";
    }

    // rest function() are same of set.
    
return (0);
}