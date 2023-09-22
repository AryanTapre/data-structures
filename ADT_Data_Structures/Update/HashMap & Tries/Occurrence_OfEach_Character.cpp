//TODO: given a string find out occurrence of each Character...

#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    unordered_map<char,int> store;
    string str = "thrivananthpuram";

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];

        store[ch]++;
    }

    cout<<"printing count of each character :"<<endl;
    for(auto i : store) {
        cout<<i.first<<":"<<i.second<<endl;
    }

return 0;
}
