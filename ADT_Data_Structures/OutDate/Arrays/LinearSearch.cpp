// to perform linear search..

#include<iostream>
using namespace std;

class Solution {

    public :
        int search(int a[], int size, int key) {
            for(int i=0; i<size; i++) {
                if(key == a[i])
                    return 1;
            }
            return 0;
        }
};

int main() {
    Solution sol;
    int array[5] = {-45,50,0,4,9};
    int found = sol.search(array,(sizeof(array)/sizeof(int)),9);
    if(found)
        cout<<"element exits in array..";
    else
        cout<<"can not find element..";
}