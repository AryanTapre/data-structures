#include<iostream>
using namespace std;

void sortOne(int *arr,int size) {

    int left = 0,right = size - 1;

    while(left < right) {
        
        if(arr[left] == 0 )
            left++;
        else if(arr[right] == 1)
            right--;
        else if(arr[left] == 0 && arr[right] == 0) {
            int temp = arr[left+1];
            arr[left+1] = arr[right];
            arr[right] = temp;
        }
        else if(arr[left] == 1 && arr[right] == 1) {
            int temp = arr[left];
            arr[left] = arr[right-1];
            arr[right-1] = temp;        
        }
        else {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            
        }
    }

    cout<<"sorted array is : "<<endl;
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }

}

int main() {

    int arr[5] = { 1,1,1,1,1 };
    sortOne(arr,(sizeof(arr)/sizeof(int)));
    return (0);

}