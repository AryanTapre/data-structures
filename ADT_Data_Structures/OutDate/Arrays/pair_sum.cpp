#include<iostream>
using namespace std;

void findSumPair(int *arr,int size, int s) {


    bool checker  = false;

    for( int i=0; i<size; i++ ) {

        for( int j=i+1; j<size; j++ ) {

            if( (arr[i]+arr[j]) == s ) {

                checker = true;
                cout<<endl;
                cout<<arr[i]<<" "<<arr[j];
            }
        }
    }

    if(!checker) {

        cout<<endl<<"can not process to find pair of the sum "<<s;
    }
}

int main() {
    
    int arr[5] = {1,2,2,4,1};
    int s = 4;

    findSumPair(arr,sizeof(arr)/sizeof(int),s);
    return (0);

}