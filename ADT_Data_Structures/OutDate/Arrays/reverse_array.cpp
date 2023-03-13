// Reversing content of array..
#include<iostream>
using namespace std;

class Solution {

    public:
        void reverseArray(int a[], int size) {

            int BEG = 0,END = size - 1,temp;
            while(BEG < END) {
                    temp = a[BEG];
                    a[BEG] = a[END];
                    a[END] = temp;
                    BEG++;
                    END--;
            }
             
        }
};

int main() {

    Solution sol;
    int a[5] = {1,4,3,4,5};
    sol.reverseArray(a,5);
    cout<<"reverse array is : "<<endl;
    for(int i=0; i<5; i++) {
            cout<<a[i]<<" ";
    } 

   
    return (0);
}