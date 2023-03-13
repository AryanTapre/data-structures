// List works on concept of Doubly linked list..

#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> l;

	cout<<"Size of list ->"<<l.size();

	l.push_back(2);
	l.push_front(1);
	l.push_back(4);
	l.push_front(3);

	cout<<endl<<"Status of list ->"<<endl;
	for(int i : l) {
		cout<<i<<" ";
	}

    cout<<endl<<"Size of list ->"<<l.size();

    l.erase(l.begin());
    cout<<endl<<"After erase ->"<<endl;
    for(int i : l) 
    {
		cout<<i<<" ";
	}

    l.pop_back();
    cout<<endl<<endl;
    for(int i : l) 
    {
		cout<<i<<" ";
	}

    cout<<endl<<"List if empty ? ->"<<l.empty();

}
