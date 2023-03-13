#include<iostream>
#include<vector>
using namespace std;
 bool uniqueOccurrences(int arr[]) {
        int b[3]={0};

        for(int i=0;i<2;i++){
            b[abs(arr[i])]++;
    //        b.insert(p+arr[i],1);
        }
        // int ans = 1;
        // for(int i=0;i<b.size()-1;i++){
        //     ans = ans ^ b[i];
        //     if(!ans) {
        //         return false;
        //     }
        // }
        // return true;
        
        for(int i=0;i<2;i++) {
            cout<<b[i]<<endl;
        }
    return false;
 }

int main() {
    int v[2]={1,2};
    cout<<uniqueOccurrences(v);
return (0);
}