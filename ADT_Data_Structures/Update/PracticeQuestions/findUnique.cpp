#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr) {
    int ans = 0;
    for(int i=0;i<arr.size()-1;i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
 vector<int> v{7,2,3,7,2,3,4};
 cout<<"unique is : "<<findUnique(v)<<endl;
return (0);
}