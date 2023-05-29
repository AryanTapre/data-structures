/* 
leetcode 415
*/

#include<bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2, int i1, int i2, int carry) {
    // base condition::
    if(i1 < 0 && i2 < 0) {
        if(carry != 0) {
            return string(1,carry + '0');
        }
        
        return "";
    }

    // to convert string to integer:
    // subtract 48 from it or '0' (using ASCII values of there)
    // 0-9 : ASCII values = 48-59

    // to convert integer to string:
    // add 48 or '0' on it

    int n1 = (i1>=0? num1[i1] : '0') - '0';
    int n2 = (i2>=0? num2[i2] : '0') - '0';

    int sum = n1 + n2 + carry;
    int digit = sum % 10;
    carry = sum / 10;
    string ans;
    ans.push_back(digit + '0');

    ans += addStrings(num1, num2, i1-1, i2-1, carry);
    return ans;
}

int main() {

    string num1 = "12";
    string num2 = "1";
    int i1 = num1.size()-1;
    int i2 = num2.size()-1;

    string ans = addStrings(num1,num2,i1,i2,0);
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;


return 0;
}