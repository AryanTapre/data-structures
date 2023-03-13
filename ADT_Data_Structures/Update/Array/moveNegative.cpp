// move all -ve elements towards left, and +ve elements on other side..
#include<vector>
#include<iostream>
using namespace std;

void moveNegatives(vector<int>& v) {
    int LOW = 0, HIGH = v.size()-1;
    while(LOW < HIGH) {
        if(v[LOW] < 0) {
            LOW++;
        }
        else if(v[HIGH] > 0) {
            HIGH--;
        }
        else {
            swap(v[LOW],v[HIGH]);
        }
    }
}

int main() {
    vector<int> v{1,2,3,4,-1};
    moveNegatives(v);
    for(auto i : v) {
        cout<<i <<" ";
    }
        

return (0);
}