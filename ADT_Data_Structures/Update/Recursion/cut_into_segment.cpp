/*
    Consider a Rod having length N
    find maximum segment that can made by cutting Rod with following segments defined below:
    x,y,z
    
    ondate - 25-05-2023
    created by- @AryanTapre
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
 
    int cutIntoSegment(int rod, vector<int>& seg) {
        // baseCase::
        if(rod == 0) {
            return 0;
        }
        if(rod < 0) {
            return -1;
        }
        int ans;
        for(int i=0; i<seg.size(); i++) {
                 ans = cutIntoSegment(rod-seg[i],seg);
                if(ans >= 0) {
                    cout<<seg[i]<<" ";   
                   
                }    
        }
       return ans;
    }

    int solve(int rod, vector<int>& seg) {
        if(rod == 0) {
            return 0;
        }
        if(rod < 0) {
            return INT_MIN;
        }

        int maxi = INT_MIN;
        for(int i=0; i<seg.size(); i++) {
            int ans = solve(rod-seg[i],seg);
                if(ans != INT_MIN)          
                    maxi = max(maxi,ans+1);
        }
        return maxi;
    }

int main() {
    int rod = 5;
    vector<int> seg = {4,2,3};

    cutIntoSegment(rod,seg);

    cout<<endl<<" maximum number of element needed: ";
    cout<<solve(rod,seg);

return (0);
}

