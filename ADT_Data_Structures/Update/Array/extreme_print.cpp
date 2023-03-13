#include<iostream>
using namespace std;

int main() {
    
    int arr[8] = {1,2,3,4,5,6,7,8};
    int A=0,B=7;
    while(A<B) {
        cout<<arr[A]<<" "<<arr[B]<<" ";
        A++;
        B--;
    }

return (0);
}