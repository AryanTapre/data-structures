#include<iostream>
using namespace std;

class Solution {

    public:
        int firstOccurence(int[], int , int); 
        int lastOccuence(int[], int, int);
	
};

int Solution :: firstOccurence(int arr[], int size, int key) {
    
    int first=-1 ,mid;
    int start = 0, end = size-1;
    mid = start + (end-start)/2;

    while(start <= end) {

                if(key == arr[mid]) {
                    first = mid;
                    end = mid-1;
                }
                
                else if (key > arr[mid]) {
                    start = mid+1;
                }
                else {
                    end = mid-1;
                }
                 mid = start + (start-end)/2;
        
    }  
     return first;
}

int Solution :: lastOccuence(int arr[], int size, int key) {

    int second=-1,mid;
    int start = 0, end = size-1;
    mid = start + (end-start)/2;

    while(start <= end) {

                if(key == arr[mid]) {
                    second = mid;
                    start = mid+1;
                }
              
                else if (key > arr[mid]) {
                    start = mid+1;
                }
                else {
                    end = mid-1;
                }
                 mid = start + (start-end)/2;
        
    }  
     return second;
}


int main() {

    int even[5] ={1,2,3,3,5};

    Solution sol;
    int f = sol.firstOccurence(even,5,3);
    int l = sol.lastOccuence(even,5,3);

    cout<<"first occurence at index : "<<f;
    cout<<endl<<"last occurence at index : "<<l;

    return (0);
}

