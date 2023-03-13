#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int findMax(vector<int> n) {
    int maxi = INT_MIN;
    for(int i=0;i<n.size()-1;i++) {
        if(n[i] > maxi)
            maxi = n[i];
    }
    return maxi;
} 

int findMin(vector<int> n) {
    int mini = INT_MAX;
    for(int i=0;i<n.size()-1;i++) {
        if(n[i] < mini)
            mini = n[i];
    }
    return mini;
} 
int main() {
 
 vector<int>v{1,2,3,4,5,5,10,50};
 cout<<"maxi : "<<findMax(v)<<endl;
 cout<<"mini : "<<findMin(v)<<endl;

return (0);
}