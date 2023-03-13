#include<iostream>
#include<map>

using namespace std;
 
int main() {
    
    map<int,int> map;
    map[0]=1;
    map[1]=2;
    map[2]=3;
    map[3]=4;

    map<int,int> :: iterator iT;
    iT = map.begin();
    while(iT != map.end()) {
        cout<<iT->first<<"-->"<<iT->second<< endl;
        iT++;
    }

return (0);
}