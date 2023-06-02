

#include<iostream>
using namespace std;
 
int main() {
 
    int arr[4][4] = {
        {10,5,90,42},
        {11,8,75,53},
        {20,6,61,86},
        {80,4,72,68}
    };
    bool isPrintFromBottom = false;
   
   
   for(int j=0; j<4; j++) {

        if(isPrintFromBottom) {
            for(int i=3; i>=0; i--) {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            isPrintFromBottom = false;
        }
        else
        {
            for(int i=0; i<4; i++) {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;

            isPrintFromBottom = true;
        }
   }

return (0);
}