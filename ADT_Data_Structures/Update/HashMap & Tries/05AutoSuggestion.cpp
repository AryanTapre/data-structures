#include<bits/stdc++.h>
using namespace std;

class Trie {
    public:
        char data;
        bool isTerminal;
        unordered_map<char,Trie*> child;

        Trie(char _data) : data(_data) {
            isTerminal = false;
        }
};

void insert(Trie* root, string word) {
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    Trie* children;

    if(root->child.find(ch) == root->child.end()) {
        children = new Trie(ch);
        root->child[ch] = children;
    }
    else {
        children = root->child[ch];
    }

    insert(children,word.substr(1));
}

void storeSuggestion(Trie* curr, vector<string> &ans, string &temp, string &prefix) {
    if(curr->isTerminal == true) {
        string word = prefix + temp;
        ans.push_back(word);
    }

    for(auto i : curr->child) {
        temp += i.first;
        storeSuggestion(i.second,ans,temp,prefix);
        temp.pop_back();
    }
}

vector<vector<string> > autoSuggestion(Trie* root, string &input) {
    vector<vector<string> > output;
    Trie* prev = root;
    Trie* curr;
    string prefix = "";

    for(int i=0; i<input.length(); i++) {
        char ch = input[i];

        auto status = prev->child.find(ch);
        if(status == prev->child.end()) {
            break;
        }
        else {
            curr = status->second;
            vector<string> ans;
            string temp;

            prefix.push_back(ch);
            storeSuggestion(curr,ans,temp,prefix);
            output.push_back(ans);
            ans.clear();
            prev = curr;
        }
    }
    return output;
}

int main() {
 
    Trie* root = new Trie('-');

    insert(root,"car");
    insert(root,"card");
    insert(root,"camp");
   

    string input = "cam";

    vector<vector<string> > output = autoSuggestion(root,input);

    for(auto i : output) {
        for(auto x : i) {
            cout<<x<<" ";
        }
        cout<<endl;
    }

return 0;
}