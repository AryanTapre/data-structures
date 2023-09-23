#include<unordered_map>
#include<iostream>
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

void delete(Trie* root, string word) {
    if(word.length() == 0) {
        root->isTerminal = false;
        return;
    }

    char ch = word[0];
    Trie* children;

    if(root->child.find(ch) != root->child.end()) {
        children = root->child[ch];
    }
    else {
        return;
    }

    delete(children,word.substr(1));
}


int main() {
 
return 0;
}