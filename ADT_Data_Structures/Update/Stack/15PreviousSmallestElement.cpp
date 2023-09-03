// important Question..
// Most important Stack QUESTION in interviews


#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> previousSmallestElement(vector<int>& input) {
    stack<int> s;
    vector<int> ans(input.size());
    s.push(-1);

    for(int i=0; i<input.size(); i++) {
       while(s.top() >= input[i]) {
            s.pop();
       }

       ans.at(i) = s.top();
       s.push(input[i]);
    }

    return ans;
}

int main() {
 
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    vector<int> ans = previousSmallestElement(input);

    for(auto i : ans) {
        cout<<i<<" ";
    }
    cout<<endl;

return 0;
}