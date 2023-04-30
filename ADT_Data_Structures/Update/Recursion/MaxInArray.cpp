#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
 
    int max(vector<int>& arr, int i, int& N, int& maxi) {
        if (i == N) { return maxi; }
        if(arr.at(i) > maxi) { maxi = arr.at(i); }
        return max(arr,(i+1),N,maxi);
               
    }

int main() {    
    vector<int> arr{10,20,80,10,0,89,56,23,10,50,50,10};
    int i = 0, N = arr.size(), maxi = INT_MIN;

    int maximumElement = max(arr,i,N,maxi);
    cout<<"maxi is : "<<maximumElement<<endl;

return (0);
}