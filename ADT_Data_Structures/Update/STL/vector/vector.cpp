#include<vector>
#include<iostream>
using namespace std;
 
int main() {
 
    // vector<int> v(5,0); // 5 is size for vector and 0 is initialization with 0

    vector<int> v = {10,90,45,67,80,75,100,890,1670};
    

    // iterators.
    vector<int> :: iterator it = v.begin();
    cout<<"first element:"<<*it<<endl;
    cout<<"second element:"<<*(it+1)<<endl;

    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i = v.begin(); i != v.end(); ++i) {
        cout<<*i<<" ";
    } cout<<endl;

    it = v.begin(); 
    *it = 1; // changing elements 

    cout<<endl;
    for(auto i = v.begin(); i != v.end(); ++i) {
        cout<<*i<<" ";
    } cout<<endl;


    // Capacity.
    cout<<endl<<"capacity of v:"<<v.capacity()<<endl;
    cout<<"size of v:"<<v.size()<<endl;

    if(v.empty()) {
        cout<<"v is EMPTY"<<endl;
    } else {
        cout<<"V is NOT empty"<<endl;
    }
    

    // Element access.
    cout<<"value at using pos(2):"<<v[2]<<endl;
    cout<<"value at using at(2):"<<v.at(2)<<endl;

    cout<<"getting first element:"<<v.front()<<endl;
    cout<<"getting last element:"<<v.back()<<endl;


    //Modifiers
    v.push_back(8);
    v.pop_back();  // 8 will popped up
    
    v.insert(v.begin()+1,0); // insert at pos(1)
    v.erase(v.end()-1); // erase last second element

    cout<<endl<<"modifiers:"<<endl;
     for(auto i = v.begin(); i != v.end(); ++i) {
        cout<<*i<<" ";
    } cout<<endl;
 
    // vector1.swap(vector2);

    


    // 2D vector
    vector<vector<int>> 2dv;
    


return (0);
}