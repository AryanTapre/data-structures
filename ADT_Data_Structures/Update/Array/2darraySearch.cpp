#include<iostream>
using namespace std;

bool search(int a[][3],int key) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(key == a[i][j]) {
                return true;
                
            }
        }
    }
    return false;
}

int main() {
 
    int a[3][3] = {
                    {1,2,3},
                    {45,90,0},
                    {100,980,40}
                  };
    cout<<"key found:"<<search(a,20)<<endl;
    

return (0);
}