/* Given an array/list 'ARR' of integers and a position 'M'. You have to reverse the array
 after that position... */

#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v, int M) {

    int s = M + 1, e = v.size()-1; 

    while(s<=e) {
        
        swap(v[s],v[e]);
        s++;
        e--;
    }

    return (v);
}

void printArray(vector<int> v) {

    for(auto i : v) {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    int M = 1;

    vector<int> ans = reverse(v,M);
    printArray(ans);

    return 0;
}
