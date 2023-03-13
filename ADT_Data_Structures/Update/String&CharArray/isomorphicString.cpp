// leetcode 205
#include<map>
#include<string>
#include<iostream>
using namespace std;
 
    bool isIsomorphic(string s, string t) {
        map<char,char> hash;
        map<char,char> :: iterator itr;
        string ans = "";
        int index = 0;
        while(index <= s.size()-1) {
            hash.insert(pair<char,char>(s[index],t[index]));
            index++;
        }
   
        for(int i=0; i<t.size(); i++) {
                itr = hash.begin();
                while(itr != hash.end()) {
                     if(t[i] == itr->second) {
                        ans.push_back(itr->first);
                        break;
                     }   
                     itr++;
                }
              
        }
        if(s.compare(ans) == 0) return true;
        else return false;
    }

int main() {
 
    string s = "egg", t = "add";
    cout<<"isomorphic : "<<isIsomorphic(s,t)<<endl;

return (0);
}