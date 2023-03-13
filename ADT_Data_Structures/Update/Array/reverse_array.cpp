#include<iostream>
using namespace std;
 
int main() {

    int arr[8] = {1,2,3,4,5,6,7,8};
    int start = 0,end = 7;
    while(start < end) {
        swap(arr[start],arr[end]);
        start+=1;
        end-=1;
    }
    for(auto i :arr) {
        cout<<i<<" ";
    }
   // cout<<endl<<arr[0]<<endl;

return (0);
}