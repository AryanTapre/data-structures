#include<iostream>
#include<vector>
using namespace std;
 
int findUnique(vector<int> v) {
    int ans = 0;

    for(int i=0;i<v.size();i++) {
        ans = ans ^ v[i];
    }
    return ans;
} 

int main() {
    
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<endl<<"enter elements:"<<endl;
    for(int i=0;i<v.size();i++) {
        cin>>v[i];
    }

    int unique = findUnique(v);
    cout<<endl<<"unique element:"<<unique;
    
return (0);
}