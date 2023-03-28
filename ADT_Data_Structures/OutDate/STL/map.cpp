
#include<iostream>
#include<map>

using namespace std;

int main() {

    map<int,string> m;

    m[1] = "Aryan";
    m[2] = "Harshad";
    
    m.insert({13,"Love"});
    m.insert({15,"Kumar"});

    map<int,string> :: iterator ij;
    ij = m.begin();
    while(ij != m.end()) {
        cout<<ij->first<<"->"<<ij->second<<endl;
        ij++;
    }

    // for(auto i : m) {
    //     cout<<i.first<<"->"<<i.second<<endl;
    // }

    cout<<endl<<"Finding 2 ->"<<m.count(2)<<endl;

    cout<<endl<<"Before erase -> "<<endl;
    for(auto i : m) {
        cout<<i.first<<":->"<<i.second<<endl;
    }

    cout<<endl<<"Size of Map -> "<<m.size();

    m.erase(2);

    cout<<endl<<"After erase ->"<<endl;
    for(auto i : m) {
        cout<<i.first<<":->"<<i.second<<endl;
    }

    cout<<endl<<"Size of Map -> "<<m.size()<<endl;

    auto iterator = m.find(13);

    // for(auto i = iterator; i!=m.end(); i++) {
    //     cout<<(*i).first<<endl;
    // } 
    cout<<endl<<"Iterator printing value ->";
    cout<<(*iterator).second<<endl; 
    
    ij = m.find(13);
    cout<<ij->second<<endl;

}