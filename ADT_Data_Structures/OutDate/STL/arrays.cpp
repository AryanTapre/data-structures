#include<iostream>
#include<array>
using namespace std;

int main()
{
    int basic[3] = {1,2,3};
    array<int,5> a = {1,2,3,4,5};

    int size = a.size();
    cout<<endl<<"size-> "<<size;

    for( int i=0; i<size;i++ )
    {
        cout<<a[i]<<endl;
    }


    cout<<endl;
    cout<<"is empty or not-> "<<a.empty();

    cout<<endl<<"element at index 3->"<<a.at(3);

    cout<<endl<<"Front element->"<<a.front();
    cout<<endl<<"Back element->"<<a.back();

    return (0);
}
