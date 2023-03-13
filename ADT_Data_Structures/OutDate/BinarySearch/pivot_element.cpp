#include<iostream>
//                    #include<bits/stdc++.h>
using namespace std;

int getPivot(int *arr,int size) {

    int start = 0,end = size-1;
    int mid = start + (end-start)/2;

    while(start < end) {

        if(arr[mid] >= arr[0]) {
            start = mid+1;
        }
        else {
            end = mid;
        }

        mid = start + (end-start)/2;
						// Time complexity:- O(logn)
    }
    return (arr[start]);
    		

}

int main() {

    int array[6] ={7,9,1,2,3};
    int r = getPivot(array,(sizeof(array)/sizeof(int)));
    cout<<endl<<"Pivot element is : "<<r;
    return (0);


}
