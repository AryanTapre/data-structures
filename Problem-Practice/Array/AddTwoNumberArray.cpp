/*
    GFG: https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/1
    Add two numbers represented by two arrays
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
    string calc_Sum(int *a,int n,int *b,int m){
        int i = n-1;
        int j = m-1;
        int num,digit,carry=0;
        string ans;
        
        while(i>=0 && j>=0) {
            num = a[i]+b[j]+carry;
            digit = num % 10;
            carry = num / 10;
            ans.push_back(digit+'0');
            i--;
            j--;
        }
        
        while(i>=0) {
            num = a[i]+0+carry;
            digit = num % 10;
            carry = num / 10;
            ans.push_back(digit+'0');
            i--;
        }
        
        while(j>=0) {
            num = 0+b[j]+carry;
            digit = num % 10;
            carry = num / 10;
            ans.push_back(digit+'0');
            j--;
        }
        
        if(carry){
            ans.push_back(carry+'0');
        }
        
        
        int x = ans.size()-1;
        while(ans[x] == '0') {
            ans.pop_back();
            x--;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }

int main() {
 
    int a[4] = {9,5,4,9};
    int b[3] = {2,1,4};

    cout<<calc_Sum(a,4,b,3);

return (0);
}