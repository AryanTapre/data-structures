#include<iostream>
using namespace std;

class Solution {
    public:
        void selectionSort(int [] ,int );
};

void Solution :: selectionSort(int arr[], int n) {
    
    int min;
    int temp,j;
    for(int i=0; i<n-1; i++) {
        min = i;

        for(j=i+1; j<n; j++) 
        {
             if(arr[j] < arr[min])
                    min = j;   
        }
        swap(arr[min] , arr[i]);
    }

    // time complexity: O(n*n)  space : O(1)
    
}

int main() {

    Solution s;
    int arr[5] = {5,4,3,2,1};
    s.selectionSort(arr,5);

    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }    
    
    return(0);
}

