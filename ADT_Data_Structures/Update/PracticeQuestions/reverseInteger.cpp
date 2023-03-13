// reverse integer..

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int rem=0,ans=0;
    while(n > 0) {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n /10; 
    }
    cout<<endl<<"reverse is :"<<ans;
    return 0;
}