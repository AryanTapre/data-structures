#include<vector>
#include<iostream>
using namespace std;

    void getUnion(vector<int>&a,vector<int>b) {
        
        for(int i=0; i<a.size(); i++) {
            for(int j=0; j<b.size(); j++) {
                if(a[i] == b[j]){
                    b[j] = b[j] * -1;
                }
            }
        }
        
        for(int x=0; x<b.size(); ++x) {
            if(b[x] > 0){
                a.push_back(b[x]);
            }
        }
    }
 
int main() {
    
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    vector<int> b = {10,5,11,4,5};

    getUnion(a,b); 
    for(auto i:a) {
        cout<<i<<" ";
    }
return (0);
}