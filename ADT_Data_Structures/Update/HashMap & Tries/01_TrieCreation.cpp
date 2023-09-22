//TODO: create a trie data structure...
#include<array>
#include<iostream>
using namespace std;

class Trie {
    public: 
        char data;
        bool isTerminal;
        Trie* childrens[26];


        Trie(char _data) : data(_data) {
            isTerminal = false;
            for(int i=0; i<26; i++) {
                childrens[i] = nullptr;
            }
        }
}; 

void insertWord(Trie* root, string word) {
            //base case
            if(word.length() == 0) {
                root->isTerminal = true;
                return;
            }

            char ch = word[0];
            int index = ch-'a';
            Trie* child;

            //present or not
            if(root->childrens[index] != nullptr) {
                child = root->childrens[index];
            }
            else {
                child =  new Trie(ch);
                root->childrens[index] = child;
            } 

            insertWord(child,word.substr(1));  
        }

        bool searchWord(Trie* root, string word) {
            if(word.length() == 0) {
              if(root->isTerminal == true) {
                return true;
              }
              else {
                return false;
              }
            }

            char ch = word[0];
            int index = ch-'a';
            Trie* child;
            if(root->childrens[index] != nullptr) {
                child = root->childrens[index];
            }
            else {
                return false;
            }

           return searchWord(child,word.substr(1));
        }

int main() {
 
    Trie* root = new Trie('-');
    
    insertWord(root,"raju");
    insertWord(root,"code");
    insertWord(root,"aryan");
    insertWord(root,"babbar");
    insertWord(root,"love");
    insertWord(root,"dada");


    if(searchWord(root,"dadal")) {
        cout<<"present"<<endl;
    }
    else {
        cout<<"absent"<<endl;
    }
    
return 0;
}