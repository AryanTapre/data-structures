// practice.gfg
#include<iostream>
using namespace std;
#include <bits/stdc++.h>


    bool possibleSolution(vector<int>& stalls, int k, int mid) {
        int cow = 1;
        int pos = stalls[0];
        
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-pos >= mid ){
                cow++;
                pos = stalls[i];
            }
            if(cow == k) return true;
        }
        return false;
    }


    int solve(int n, int k, vector<int> &stalls) {
        
        int start = 0;
        sort(stalls.begin(),stalls.end());
        int end = stalls[stalls.size()-1]-stalls[0];
        int ans =1;
        
        while(start <= end) {
            int mid = start + (end-start)/2;
            
            if(possibleSolution(stalls,k,mid)) {
                ans = mid;
                start = mid +1;
            }
            else {
                end = mid -1;
            }
        }
        return ans;
        
    }


int main() {
 vector<int> stalls{1,2,4,8,9};
 int n = 5, k= 3;
 cout<<solve(n,k,stalls);x`

return (0);
}