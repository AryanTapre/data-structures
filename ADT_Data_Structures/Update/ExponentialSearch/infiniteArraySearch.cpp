#include<vector>
#include<iostream>
using namespace std;

int binarySearch(int start, int end, vector<int> &arr, int key)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int searchInInfinite(vector<int>&arr, int key) {
    int i = 0;
    int j = i+1;
    while(arr[j] < key) {
        i = j;
        j = j*2;
    }
   // cout<< " i:"<<i << "j:"<<j<<endl;
    return binarySearch(i,j,arr,key);

}

int main() {
 vector<int> arr{3,4,5,6,7,8,9,10,67,88,100,780,790,800,901,950,1000,1500};
 int key = 3;

 cout<<"element found at position : "<<searchInInfinite(arr,key)<<endl;
return (0);
}