#include<string>
#include<iostream>
using namespace std;
 
int main() {
 string s = "love babbar";
 cout<<"size:"<<s.size()<<endl;
 cout<<"capacity:"<<s.capacity()<<endl;

 string end = " :founder of CodeHel";
 s.append(end);
 cout<<endl<<s;

 s.push_back('p');
 cout<<endl<<s<<endl;

 s.pop_back();
 cout<<s<<endl;

 cout<<s.find("ov")<<endl;
 cout<<s.rfind("e")<<endl;

 cout<<"capacity : "<<s.capacity()<<endl;
 cout<<"size : "<<s.size()<<endl;
 
 s.erase();
 cout<<endl<<"after erase() => "<<endl;
 cout<<"capacity : "<<s.capacity()<<endl;
 cout<<"size : "<<s.size()<<endl;



return (0);
}