#include<iostream>
using namespace std;

int* findTriplet(int *array, int size, int sum) {

    int i,j,k;
    int *res = new int[3];
    for(i=0 ; i<size; i++) {
            for(j = i+1; j<size; j++) {
                    for(k = j+1; k<size; k++) {

                        if((array[i]+array[j]+array[k]) == sum) {
                            
                            res[0] = array[i];
                            res[1] = array[j];
                            res[2] = array[k];
                            return (res);
                        }
                        else {
                            break;
                        }
                    }    
            }
    }
    res[0] = -1;
    return(res);
}

int main() {

    int array[6] = {1,2,3,1,2,3},sum = 6;
    int *res =  findTriplet(array,(sizeof(array)/sizeof(int)),sum);

    cout<<"Triplets in the array is : "<<endl;
    if(res[0]!= -1) {

            for(int i=0; i<3 ; i++) {
                 cout<<res[i]<<" ";
            }
    }
    else {
        cout<<res[0];
    }

    return (0);



}