// Find First NON- Repeating character in a Stream..

#include<iostream>
#include<queue>
using namespace std;

string solve(string &str) {
    queue<char> q;
    int frequency[26] = {0}; // mapping character to index..
    string ans = "";

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        frequency[ch - 'a']++;
        q.push(ch);

        while(!q.empty()) {
           if(frequency[q.front() - 'a'] > 1) {
                // repeating character..
                q.pop();
           }
           else {
                ans.push_back(q.front());
                break;
           }
        }

        // if queue is empty (No non-repeating found)..
        if(q.empty()) {
            ans.push_back('#');
        }
    }
    return ans;
}

int main() {
 
    string str = "aabc";
    string ans = solve(str);
    cout<<"answer is : "<<ans<<endl;

return 0;
}