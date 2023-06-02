/*  
    CreatedBy: @AryanTapre
    onDate: 31-05-2023
    TODO : give transpose of a matrix
*/

#include<iostream>
using namespace std;

    void getTranspose(int a[][3], int b[][3]) {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                b[j][i] = a[i][j];
            }
        }
    }
 
int main() {

    int A[3][3] = { {40,32,49},{8,89,0},{49,10,100} };
    int B[3][3];

    getTranspose(A,B); 

        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cout<<B[i][j]<<" ";
            }
            cout<<endl;
        }


return (0);
}
