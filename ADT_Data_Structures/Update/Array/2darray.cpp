#include<iostream>
using namespace std;
 
int main() {

    int arr[][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                 };
    cout<<"printing 2d array:"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"row-major printing:"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"column-major printing:"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
return (0);
}