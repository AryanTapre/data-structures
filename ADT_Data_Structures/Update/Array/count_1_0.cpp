#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[] ={1,1,1,0,0,0,1,0,1,0,1,0,1};
    int numOne = 0;
    int numZero = 0;

    for(int i=0;i<13;i++) {
        if(arr[i] == 0)
            numZero++;
        else
            numOne++;
    }
    
    int a = 45;

    cout<<endl<<"Zero:"<<numZero<<endl;
    cout<<"One:"<<numOne<<endl;
    

return (0);
}