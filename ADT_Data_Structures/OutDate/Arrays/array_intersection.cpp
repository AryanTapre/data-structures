// to Find intersection of array i.e A and B

#include<iostream>
using namespace std;

void findIntersection(int A[],int B[],int n,int m) {

        int i = 0,j = 0; 
        int checker = 0; 
        while(i<n && j<m) {

            if(A[i] < B[j]) {

                i++;
            }
            else if(A[i] == B[j]) {

                checker = 1;
                cout<<A[i]<<" ";
                i++;
                j++;
            }
            else {

                j++;
            }
        }

        if(checker == 0) {
            cout<<-1;
        }
}


int main() {

        int A[10]={10,20,30,40,50,60,70,80,90,100};
        int B[10]={11,22,33,44,55,66,77,88,99,100};

        cout<<endl;

        findIntersection(A,B,sizeof(A)/sizeof(int),sizeof(B)/sizeof(int));
        return (0);

    
}