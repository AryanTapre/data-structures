#include<iostream>
using namespace std;

int main() 
{
    int arr[5];
    cout<<"enter input in the array"<<endl;
    for(int i=0;i<5;i++) {
        cin >> arr[i];
    }

    cout<<endl<<"printing values"<<endl;
    for(int index = 0;index<5;index++) {
        cout<< arr[index]<<endl;
    }

    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // int a[] = {1,2,3,5};
    // int b[3];
    // cout<<&b;       
    // b[0x61fecc + 1*4] = 45;
    // b[1]=45;
    // for(auto i : b) {
    //     cout<<b[i];
    // } 


     return 0;
}