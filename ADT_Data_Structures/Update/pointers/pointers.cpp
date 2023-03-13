#include<iostream> 
using namespace std;
 
int main() {
    
    int w = 450;
    int * p = &w;
    cout<<w<<endl;
    cout<<*p<<endl;
    cout<<&w<<endl;
    cout<<p<<endl;

    cout<< endl;

    int x;
    p = &x;
    cout<<*p<<endl;
  
    cout<<endl;
    int a= 45;
    char ch= 'a';
    double db = 10.03;

    int *j = &a;
    char * c = &ch;
    double *d = &db;
    cout<<sizeof(j)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;

    cout<<endl;
    // int *ko;
    // cout<<*ko<<endl;
    int *l = nullptr;
    cout<<*l<<endl;
    

return (0);
}