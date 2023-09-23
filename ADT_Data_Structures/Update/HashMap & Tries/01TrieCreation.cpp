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

void insert(Trie* root, string word) {
    if(word.length() == 0) {
        root->isTerminal = true;
        return;
    }
        

    char ch = word[0];
    Trie* children;

    if(root->child.find(ch) != root->child.end()) {
        children = root->child[ch];
    }
    else {
        children = new Trie(ch);
        root->child[ch] = children;
    }

    insert(children,word.substr(1));
}

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

    return search(children,word.substr(1));
}

void deleteWord(Trie* root, string word) {
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

   return deleteWord(children,word.substr(1));
}

void getWords(Trie* root, string &word) {
    if(root->isTerminal) {
        cout<<word<<endl;
    }


    for(auto i : root->child) {
        word += i.first;
        getWords(i.second,word);
        word.pop_back();
    }
}


int main() {
 
    Trie* root = new Trie('-');
    insert(root,"abc");
    insert(root,"apo");
    insert(root,"cb");
    insert(root,"xyz");


    if(search(root,"pokemon")) {
        cout<<"word found!"<<endl;
    }
    else {
        cout<<"word NOT found!"<<endl;
    }

     deleteWord(root,"xyz");

     if(search(root,"pokemon")) {
        cout<<"word found!"<<endl;
    }
    else {
        cout<<"word NOT found!"<<endl;
    }


   string word = "";
    getWords(root,word);

    


return 0;
}