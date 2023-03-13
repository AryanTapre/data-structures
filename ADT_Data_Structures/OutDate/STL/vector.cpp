// vector is an dynamic array..

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    cout<<endl<<"Capacity of v -> "<<v.capacity();
    cout<<endl<<"size of v -> "<<v.size();

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    v.insert(v.begin()+1,100);

    cout<<endl<<"Capacity of v -> "<<v.capacity();
    cout<<endl<<"size of v -> "<<v.size();

    cout<<endl<<"Total elements in vector ->"<<endl;
    for(int i:v)
    {
        cout<<i<<endl;
    }

    v.pop_back();
    v.pop_back();

    cout<<endl;
    cout<<"After pop status is -> "<<endl;
    for(int i:v)
    {
        cout<<i<<endl;
    }

    cout<<endl<<"Capacity of v -> "<<v.capacity();
    cout<<endl<<"size of v -> "<<v.size();

    cout<<endl<<"Front element ->"<<v.front();
    cout<<endl<<"Back element ->"<<v.back();

    cout<<endl<<"Element at index(1) -> "<<v.at(1);

    cout<<endl<<endl<<"Is vector empty ->"<<v.empty();


    return (0);
}