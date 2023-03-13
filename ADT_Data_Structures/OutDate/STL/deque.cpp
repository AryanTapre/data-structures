// deque is double ended queue

#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> d;

	cout<<endl<<"size of d ->"<<d.size();

	d.push_back(4);
	d.push_back(3);
	d.push_front(20);
	d.push_front(10);

	cout<<endl<<"size of d ->"<<d.size();

	cout<<endl<<"Total elements in deque is ->"<<endl;
	for(int k:d)
	{
		cout<<k<<endl;
	}

	cout<<endl<<"Element at index (3) ->"<<d.at(3);

	d.erase(d.begin(),d.begin()+1);
	d.pop_back();

	cout<<endl<<"Total elements in deque is ->"<<endl;
	for(int k:d)
	{
		cout<<k<<endl;
	}


	return (0);
}
