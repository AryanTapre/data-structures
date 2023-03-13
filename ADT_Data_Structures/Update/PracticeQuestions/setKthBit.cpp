// setting kth bit
#include<iostream>
using namespace std;

int setKthBit(int n,int k) {
    int mask = 1 << k;
    int ans = n | mask;
    return ans;
}

int main() {

    int n,k;
    cout<<"enter value for N and K :";
    cin>>n>>k;
    cout<<endl<<"answer is = "<<setKthBit(n,k);

    return (0);
}