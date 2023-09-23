#include<iostream>
#include<unordered_map>
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

bool search(Trie* root, string word) {
    if(word.length() == 0) {
        return root->isTerminal;
    }

    char ch = word[0];
    Trie* children;

    if(root->child.find(ch) != root->child.end()) {
        children = root->child[ch];
    }
    else {
        return false;
    }

    search(children,word.substr(1));
}

int main() {
 
return 0;
}