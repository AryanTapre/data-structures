#include<iostream>
using namespace std;

void rowWiseSum(int a[][2],int rows,int col) {
    // printing row wise sum..
    for(int i=0;i<rows;i++) {
        int sum = 0;
        for(int j=0;j<col;j++) {
            sum = sum + a[i][j];
        }
        cout<<"sum for row "<<i<<":"<<sum<<endl;
        
    }

}
void columnWiseSum(int a[][2],int rows,int col) {
    // printing row wise sum..
    for(int i=0;i<rows;i++) {
        int sum = 0;
        for(int j=0;j<col;j++) {
            sum = sum + a[j][i];
        }
        cout<<"sum for column "<<i<<":"<<sum<<endl;
        
    }

}

int main() {
    
        int a[2][2] = {{1,2},{3,4}};
        cout<<endl;
        for(int i=0;i<2;i++) {
            for(int j=0;j<2;j++) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        
        cout<<endl<<"printing row-wise sum:"<<endl;
        rowWiseSum(a,2,2);
        cout<<endl<<"printing column-wise sum:"<<endl;
        columnWiseSum(a,2,2);

        
        




return (0);
}