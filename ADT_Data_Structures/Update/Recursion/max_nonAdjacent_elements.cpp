/*
find max sum from non-adjacent elements;
   { 2,1,4,9 } 
    2+4 = 6
    2+9 = 11
    1+9 = 10 
    max of (6,11,10) = 11.
    
    ondate - 25-05-2023
    created by- @AryanTapre
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
 
    void solve(vector<int>& a, int i, int sum, int maxi) {
        if(i >= a.size()) {
            maxi = max(maxi,sum);
            return;
        }

        // include
        solve(a,i+2,sum+a[i],maxi);

        // exclude.
        solve(a,i+1,sum,maxi);

    }

int main() {
    
    vector<int> a ={2,1,4,9};
    int sum = 0;
    int maxi = INT_MIN;
    int x = 0;

    for(int i=0; i<a.size()-1; i++) {

        for(int j=i+2; j<a.size(); j++) {

            sum = a[i]+a[j];
            maxi = max(maxi,sum);
        }
    }

    cout<<maxi<<endl;
    cout<<endl;


    solve(a,x,sum,maxi);
    cout<<maxi<<endl;
return (0);
}