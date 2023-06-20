/* leetcode: 17
*/

#include<vector>
#include<map>
#include<iostream>
using namespace std;

    void solve(vector<string>& ans, string& output, int index, string digits, map<int,string>& mapping) {
        if(index >= digits.length()) { //base case..
            if(index!=0) 
                ans.push_back(output);
            return;
        }

        string value = mapping[digits[index] -'0'];
        for(int i=0; i<value.length(); i++) {
            char ch = value[i];
            output.push_back(ch);
            solve(ans,output,index+1,digits,mapping);
            output.pop_back(); // backTracking..
        }
    }


    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        int index = 0;
        map<int,string> mapping;
        mapping.insert(make_pair(2,"abc"));
        mapping.insert(make_pair(3,"def"));
        mapping.insert(make_pair(4,"ghi"));
        mapping.insert(make_pair(5,"jkl"));
        mapping.insert(make_pair(6,"mno"));
        mapping.insert(make_pair(7,"pqrs"));
        mapping.insert(make_pair(8,"tuv"));
        mapping.insert(make_pair(9,"wxyz"));

        solve(ans,output,index,digits,mapping);
        return ans;
    }

int main() {

    string digits = "";
    vector<string> ans = letterCombinations(digits);
    for(auto i : ans) {
        cout<<i<<" ";
    } cout<<endl;

return 0;
}