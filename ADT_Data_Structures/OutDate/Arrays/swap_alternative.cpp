#include<iostream>
using namespace std;

class Solution {
    public:
        void swapAlternative(int a[],int size) {

            int F = 0,S = 1,bufferVal,i=0;
            while(F<=size && S<=size) {

                bufferVal = a[S];
                a[S] = a[F];
                a[F] = bufferVal;

                F += 2;
                S += 2;
            }

        }
};

int main() {

    Solution sol;
    int array[5] = {1,2,4,8,5};
    sol.swapAlternative(array,4);

    cout<<"After alternative index swapping : "<<endl;
    for(int i=0; i<5; i++) {
        cout<<array[i]<<" ";
    }

    return (0);

}