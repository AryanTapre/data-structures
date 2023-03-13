#include<iostream>
using namespace std;

void hello(int n) {
    cout<<&n;
}

int main()
{
    int n;
    cout<<&n<<endl;
    hello(n);
    
    return 0;
}