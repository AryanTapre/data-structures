
#include<map>
#include<iostream>
using namespace std;


int main() {

    map<int,int> m;
    m.insert(make_pair(45,0));
    m.insert(make_pair(67,1));
    m.insert(make_pair(90,2));
    m.insert(make_pair(67,-10));
    m.insert(make_pair(23,3));
    m.insert(make_pair(1,4));

    for(auto i : m){
        cout<<i.first<<"  -> "<<i.second<<endl;
    }
return 0;
}