
#include<iostream>
using namespace std;
 
int main() {
 
    int w = 500;
    int *p = &w;
    cout<<"value of w :"<<w<<endl;
    cout<<"address of w :"<<&w<<endl;
    cout<<"value of p :"<<p<<endl;
    cout<<"p pointing to :"<<*p<<endl;

    
    cout<<endl<<endl;
    // Changing pointer values..
    int x=45;
    p = &x;
    cout<<"value of p :"<<p<<endl;
    cout<<"p pointing to :"<<*p<<endl;

    
    cout<<endl<<endl;
    // moving to other datatypes
    bool b = false;
    char ch = 'a';
    double db = 10.03;
    bool * b1 = &b;
    char *ch1 = &ch;
    double *db1 = &db;

    cout<<"size of boolean :"<<sizeof(*b1)<<endl;
    cout<<"size of char :"<<sizeof(*ch1)<<endl;
    cout<<"size of double :"<<sizeof(*db1)<<endl;
    
    
    cout<<endl<<endl;
    int* ptr; // garbage value assigned to ptr beyond current program.
              // segmentation fault.
    cout<<ptr<<endl; 



return (0);
}