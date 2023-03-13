#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    
    vector<int> v{0,1,1,0,0,1,0,0,1,0,1,0};
    int start = 0,end = v.size()-1;
    int i=0;
     while(i != end) {
        // swap from left
        if(v[i] == 0) {
            swap(v[start],v[i]);
            start++;
            i++;
        }
        if(v[i] == 1) {
            // swap from right  
            swap(v[i],v[end]);
            end--;
        }
     }

     cout<<endl;
     for(auto i : v) {
        cout<<i<<" ";
     }


return (0);
}