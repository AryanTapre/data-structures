/* you have been given an integer array/list(ARR) of size N. where N is equal to [aM + 1].
Now, in the given array/list , 'M' numbers are present twice and one number is present only
once.
You need to find and return that number which is unique in the array list*/
#include<iostream>
using namespace std;

class Solution {

    public:
            int findUnique(int arr[],int size) {

                    int ans = 0;    
                    for(int i=0; i<size; i++) {
                            ans = ans^arr[i];
                    }
                    return ans;
            }
};

int main() {

    Solution sol;
    int arr[5] ={2,4,7,2,7};
    cout<<sol.findUnique(arr,5);
    return (0);
}



