#include<vector>
#include<iostream>
using namespace std;
 
vector<int> findMissing(vector<int> v) {
    vector<int> missing;
    int s = 0,e = v.size()-1;
    int mid = s+(e-s)/2;
    int i=mid;
    while(i>0) {
        if(v[i]-1 != v[i-1]) {
            missing.push_back(v[i]-1);
            
        }
        i--;
    }
    i=mid;
    while(i<v.size()-1) {
        if(v[i+1]-v[i] != 1) {
            missing.push_back(v[i]+1);
        }
        i++;
    }
    return missing;
} 

int main() {
    vector<int> v{1,2,3,4,6,7,8,10};
    vector<int> ans = findMissing(v);
    for(auto i:ans) {
        cout<<i<<" ";
    }
return (0);
}