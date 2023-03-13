#include<iostream>
using namespace std;

void duplicate(int *arr, int size) {

    int *dupList = new int[size],index = 0;
    for(int i=0; i<size; i++) {

        for(int j=i+1; j<size; j++) {
            if(arr[i] == arr[j]) {
                dupList[index] = arr[i];
                index = index + 1;
            }
        }
    }

    // printing duplicates 
    

    if(index > 0) {
            cout<<endl<<"The Duplicates Are : "<<endl; 
    for(int i=0; i<index; i++) {
        cout<<dupList[i]<<" ";
    }

    }
    else {
        cout<<"No Duplicates Found!!.";
    }
    

}

int main() {

    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int array[n];

    for( int i=0; i<n; i++) {
        cin>>array[i];
    }

    duplicate(array,n);
    return (0);
}