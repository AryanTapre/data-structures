// leetcode 32.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int longestValidParenthesis(string s) {
    stack<int> st;
    st.push(-1);
    int maxi = 0;

    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        if(ch == '(') {
            st.push(i);
        }
        else {
            st.pop();
            if(st.empty()) {
                st.push(i);
            }
            else {
                int len = i - st.top();
                maxi = max(len,maxi);
            }
        }
    }
    return maxi;
}

int main() {
 
    string str = "()()()()()()";
    cout<<longestValidParenthesis(str);

return 0;
}