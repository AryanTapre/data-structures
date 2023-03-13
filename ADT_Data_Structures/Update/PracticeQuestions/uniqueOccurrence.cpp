#include<map>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

bool uniqueOccurrence(vector<int> & arr) {
    map<int,int> m;
    for(int i=0;i<arr.size();i++) {
        m[arr[i]]++;
    }
    int temp=0;
    vector<int> v;
    for(auto i : m) {
        v.push_back(i.second);
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++) {
        if (v[i] == temp)
            return false;
        else
            temp = v[i];
    }
    return true;
} 
int main() {
    vector<int> v{1,2,2,1,1,3};
    cout<<"unique occurrence : "<<uniqueOccurrence(v)<<endl;
return (0);
}