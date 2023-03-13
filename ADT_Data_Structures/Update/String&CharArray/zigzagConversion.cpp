// leet code 6
#include<iostream>
#include<string>
#include<vector>
using namespace std;

    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        vector<string> zigzag(numRows);
        int row = 0, i = 0;
        bool direction = 1;

        while(true) {
            if(direction) {
                while(row<numRows && i<s.size()) {
                    zigzag[row++].push_back(s[i++]);
                }
                row = numRows - 2;
            }
            else {
                while(row>=0 && i<s.size()) {
                    zigzag[row--].push_back(s[i++]);
                }
                row = 1;
            }
            
            if(i >= s.size()) break;
            direction = !direction;
        }
        string ans = "";
        for(int i=0; i<zigzag.size(); i++) {
            ans = ans + zigzag[i];
        }
        return ans;
    }

int main() {
    string s = "ABCDEFGHI";
    int rows = 3;
    string ans = convert(s,rows);
    cout << ans <<endl;
return (0);
}