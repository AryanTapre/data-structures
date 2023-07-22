#include<array>
#include<iostream>
using namespace std;
 
int main() {
    
    array<int,10> arr = {1,2,3,4,5,6,7,8,9,10};
    array<int,10> arr2 = {10,20,30,40,50,60,70,80,90,100};
    cout<<"array size:"<<arr.size()<<endl;
    
    int &firstElement = arr.front();
    cout<<firstElement<<endl;
    firstElement = 100; // changing first element of arr

    cout<<"last element:"<<arr.back()<<endl;

    cout<<endl;
    cout<<"printing elements:"<<endl;
    for(auto x : arr){
        cout<<x<<" ";
    } cout<<endl;

    // swapping two arrays.
    cout<<endl;
    arr.swap(arr2);
     for(auto x : arr){
        cout<<x<<" ";
    } cout<<endl;

    if(arr.empty()) {
        cout<<endl<<"arr is empty.";
    } else {
        cout<<endl<<"arr is NOT empty.";
    }

    // initializing all elements of arr with 0.
    arr.fill(0);
    cout<<"printing arr after fill(0):"<<endl;
     for(auto x : arr){
        cout<<x<<" ";
    } cout<<endl;

return (0);
}