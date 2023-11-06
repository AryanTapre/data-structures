/*
TODO: find total occurrence of target..
*/

#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

    int totalOccurrence(vector<int>&A, int T) {
        auto x =  lower_bound(A.begin(),A.end(),T);
        int firstOccurrence = x-A.begin();

        x = upper_bound(A.begin(),A.end(),T);
        int lastOccurrence = x-A.begin();

        int totalOccurrence = (lastOccurrence-firstOccurrence);
        return totalOccurrence;
    }
int main() {

    vector<int> v = {1,2,3,5,9};
    cout<<totalOccurrence(v,3);

return 0;
}