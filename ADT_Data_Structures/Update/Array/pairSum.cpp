#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    vector<int> a{1,3,5,7,2,4,6};
    int sum = 9;
    bool flag = false;
    for(int i=0;i<a.size()-1;i++) {
        for(int j=i+1;j<a.size();j++) {
            if(a[i]+a[j] == sum) {
                flag = true; 
                cout<<a[i]<<" "<<a[j];
                exit(0);
            }
        }
    }

    if(!flag) {
        cout<<"no pair for sum found!";
    }

return (0);
}