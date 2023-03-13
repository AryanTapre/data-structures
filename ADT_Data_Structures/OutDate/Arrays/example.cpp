#include<iostream>
using namespace std;

int uniqueOccur(int *arr, int size) {

    int * a = new int [size];
    for(int i=0; i<size; i++) {

            int count = 1;

        for(int j=i+1; j<size; j++) {

             if(arr[i] == arr[j]) 
                    count++;
        }

        a[i] = count;
    }

     for(int i=0; i<size; i++) {
        cout<<a[i]<<" ";
    }

    for(int i=0; i<size; i++) {
        if(a[i] == a[i+1]) 
            return 0;
    }
}

int main() {

    int a[6] = {1,2,2,1,1,3};
    int r = uniqueOccur(a,(sizeof(a)/sizeof(int)));
    if(r == 0) 
        cout<<"not unique...";
    else    
        cout<<"unique...";


    return (0);
    

}
