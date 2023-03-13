#include<vector>
#include<map>
#include<iostream>
using namespace std;

vector<int> findDuplicates(vector<int> & arr) {
    map<int,int> m;
    for(int i=0;i<arr.size();i++) {
        m[arr[i]]++;
    }
    vector<int> v;
    for(auto i : m) {
        if(i.second == 2)
            v.push_back(i.first);
    }
    return v;
}

int main() {
 vector<int> v{1,2};
 cout<<"dupli : "<<endl;
 vector<int> x = findDuplicates(v);
 for(auto i : x) {
    cout<<i<<" ";
 }
return (0);
}