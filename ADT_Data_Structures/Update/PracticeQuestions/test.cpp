// leet code : 205 

#include<iostream>
#include<set>
#include<utility> // for pair<> stl template
#include<map>
#include<string>
using namespace std;

int main() {
    
    string s = "foo";
    string t = "bar"; 
    map<char,char> hash;

   int index = 0;
   while(index <= s.size()-1) {
            hash.insert(pair<char,char>(s[index],t[index]));     
            index++;        
   }
   map<char,char> :: iterator itr;
   for(itr = hash.begin(); itr != hash.end(); itr++) {
            cout<<itr->first<<" "<<itr->second <<endl;
   }

    string ans;
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

    
    if(s.compare(ans) == 0) cout<<"true";
    else cout<<"false";
    


return (0);
}