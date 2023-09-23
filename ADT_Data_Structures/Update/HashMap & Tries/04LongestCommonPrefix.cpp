//TODO:  https://leetcode.com/problems/longest-common-prefix/

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

void lcpHelper(Trie* root, string &ans) {
    if(root->child.size() > 1 || root->isTerminal == true) {
        return;
    }

   auto i = root->child.begin();
   char ch = i->first;
    ans = ans + ch;

    lcpHelper(i->second,ans);
}

 string longestCommonPrefix(vector<string>& strs) {
        Trie* root = new Trie('-');
        string ans = "";

        for(int i=0; i<strs.size(); i++) {
            string str = strs[i];
            insert(root,str);
        }

        lcpHelper(root,ans);
        return ans;
    }

int main() {
 
    vector<string> v = {"flower","flow","floight"};
    string ans = longestCommonPrefix(v);
    cout<<"ans : "<<ans<<endl;

return 0;
}