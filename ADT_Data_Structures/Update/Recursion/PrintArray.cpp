/* print array recursively!
*/

#include<iostream>
#include<vector>
using namespace std;
 
    void printArray(vector<int>& arr, int i, int& N) {
        if(i == N) return;
        cout<<arr.at(i)<<" ";
        printArray(arr,(i+1),N);
    }

int main() {

    vector<int> arr{10,20,30,40,50};
    int i = 0; int N = arr.size(); 
    printArray(arr,i,N);
   

return (0);
}