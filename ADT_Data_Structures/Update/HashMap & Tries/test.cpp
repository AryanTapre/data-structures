#include<vector>
#include<iostream>
using namespace std;

int main() {

    vector<vector<string> > output;
    vector<string> ans1 = {"code","coder","pop","hero"};
    vector<string> ans2 = {"car","hp","dell","lenevo"};

    output.push_back(ans1);
    output.push_back(ans2);

    for(auto i : output) {
        for(auto x : i) {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    string prefix = "ca";
    string temp = "rd";
    string word = prefix+temp;
    cout<<"word:"<<word<<endl;

return 0;
}