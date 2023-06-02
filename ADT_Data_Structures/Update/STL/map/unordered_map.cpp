#include<unordered_map>
#include<iostream>
using namespace std;
 
int main() {
    
    unordered_map<int,string> u_map;
    
    u_map.insert(pair<int,string>(1,"mango"));
    u_map.insert(pair<int,string>(2,"banana"));
    u_map.insert(pair<int,string>(3,"strawberry"));
    u_map.insert(pair<int,string>(4,"nuts"));
    u_map.insert(pair<int,string>(5,"orange"));

    for (auto &&i : u_map)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    


return (0);
}