// leetcode 14.
#include<string>
#include<iostream>
#include<vector>
using namespace std;
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        string ans;
        while(true) {
            char curr_char = 0;
            for(auto str:strs) {
                if(i >= str.size()) {
                    curr_char = 0;
                    break;
                }

                if(curr_char == 0) 
                    curr_char = str[i];
                else if (str[i] != curr_char) {
                    curr_char = 0;
                    break;
                }
            }
            if(curr_char == 0) break;
            ans.push_back(curr_char);
            i++;
        }
        return ans;

    }


int main() {
 
    vector<string> strs{"flower","flow","flight"};
    string ans = longestCommonPrefix(strs);
    cout<<ans;

return (0);
}