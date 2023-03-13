// leet code 1047
#include<iostream>
#include<string>
using namespace std;
 
int main() {
    string s = "azxxzy";
    int i = 0;
    string ans = "";

    while(i < s.length()) {
        if(ans.back() == s.at(i)) {
           ans.pop_back();
            cout<<ans<<endl;     
        }
        else {
            ans.push_back(s[i]);
        }
        i++;
    }

    cout<<ans;
 

return (0);
}