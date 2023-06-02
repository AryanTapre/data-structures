/*
GFG:https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
    vector<int> factorial(int N){
        vector<int> ans;
        ans.push_back(1);
        int carry=0;
        
        for(int i=2; i<=N; i++) {
            for(int j=0; j<ans.size(); j++) {
                int x = ans[j]*i+carry;
                ans[j] = x%10;
                carry = x/10;
            }
            
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }

int main() {
 
    vector<int> ans = factorial(10);
    for(auto i : ans){
        cout<<i;
    }
    cout<<endl;

return (0);
}