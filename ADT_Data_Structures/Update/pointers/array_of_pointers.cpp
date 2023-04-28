/*  Creating array of pointers
    where, each element points to some variable address.
    Created by @AryanTapre
    on date 28.04.2023
    */

#include<iostream>
using namespace std;
 
int main() {
    
    int* arr[3];
    int nums[3] = {1,2,3};
    int* ptr = nums;

    arr[0] = &nums[0];
    arr[1] = &nums[1];
    arr[2] = &nums[2];

    // accessing elements using array notations.
    for(int i=0; i<3; i++) {
        cout<<*arr[i]<<" ";
    } cout<<endl;

    // accessing elements using pointer notations.
    for(int i=0; i<3; i++) {
        cout<<*(ptr+i)<<" ";
    }cout<<endl;




    cout<<endl;
    int (*ptm)[3] = &nums;
    cout<<(*ptm)[0]<<endl;  
    cout<<(*ptm)[1]<<endl;
    cout<<(*ptm)[2]<<endl;

return (0);
}