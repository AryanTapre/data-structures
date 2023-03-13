#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[]) {
        int maxNum = INT_MIN;
        for(int i = 0; i<7; i++) {
            if(arr[i] > maxNum) {
                maxNum = arr[i];
            }
        }
        return maxNum;
}

int findMin(int arr[]) {
        int minNum = INT_MAX;
        for(int i = 0; i<7; i++) {
            if(arr[i] < minNum) {
                minNum = arr[i];
            }
        }
        return minNum;
}

int main() {
    
    int arr[] = {2,4,10,6,8,9,0};
       
    cout<<endl<<"maximum number is : "<<findMax(arr);
    cout<<endl<<"minimum number is : "<<findMin(arr);


return (0);
}