/*
    logic: include one open bracket and then include one closing bracket
    we are only including brackets not exluding it
    It's not include exclude pattern

    leetcode: 22
*/
#include<vector>
#include<iostream>
using namespace std;

    void solve(vector<string>& ans, int open, int close, string& output) {
        if(open == 0 && close == 0){ //base case
            ans.push_back(output);
            return;
        }

        if(open > 0) {  // including open bracket
            output.push_back('(');
            solve(ans,open-1,close,output);
            output.pop_back(); // backtracking
        }

        if(close > open) { // including closing bracket
            output.push_back(')');
            solve(ans,open,close-1,output);
            output.pop_back(); // backtracking
        }
    }

    vector<string> generateParantheses(int n) {
        int open = n;
        int close = n;
        string output = "";
        vector<string> ans;
        solve(ans,open,close,output);
        return ans;
    }

int main() {

    int n = 3;
    vector<string> result = generateParantheses(n);
    for(auto i : result) {
        cout<<i<<" ";
    } cout<<endl;
}