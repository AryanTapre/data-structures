#include<vector>
#include<iostream>
using namespace std;

int findRepeating(int a[]) {
    int hash[7]={0};
    for(int i=0;i<7;i++) {
        hash[a[i]]++;
    }
    for(int i=0;i<7;i++) {
        if(hash[a[i]] > 1) {
            return i+1;
        }
    }
    return -1;
}

int main() {

    int a[] = {3,5,3,4,3,5,6};
    cout<<"element repeated at:"<<findRepeating(a);
  

return (0);
}