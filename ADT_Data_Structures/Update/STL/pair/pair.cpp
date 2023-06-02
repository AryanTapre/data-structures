#include<utility> // for pair
#include<vector> //  for vector
#include<array>
#include<iostream>
using namespace std;
 
int main() {
    
    pair<int,char> p;
    p = make_pair(1,'a');
    cout<<p.first<<" "<<p.second<<endl; 
       

    pair<int,char> p2(0,'b');
    cout<<p2.first<<" "<<p2.second<<endl;    

    pair<int,double> p3 { 1,0.25 };
    cout<<p3.first<<" "<<p3.second<<endl;    

    // swapping p and p2
    p.swap(p2);
    cout<<p.first<<" "<<p.second<<endl;    


    // know, vector of pair
    cout<<endl<<"vectors of pair<>:"<<endl;
    vector<pair<int,char>> vp;
    vp.push_back(make_pair(1,'a'));
    vp.push_back(make_pair(2,'b'));
    vp.push_back(make_pair(3,'c'));
    vp.push_back(make_pair(4,'d'));

    for(auto i : vp) {
        cout<<i.first<<" "<<i.second<<endl;
    }


    
    



return (0);
}