// leetcode 49
#include<map>
#include<iostream>
#include<vector>
using namespace std;
    
    array<int,256> hashs(string s) {
        array<int,256> hash = {0};
        for(int i=0; i<s.size(); i++) {
            hash[s[i]]++;
        }
        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int,256>,vector<string> > mapping;
        for(auto str : strs) {
            mapping[hashs(str)].push_back(str);
        }
        vector<vector<string> > ans;
        for(auto it=mapping.begin(); it != mapping.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;

    } 

int main() {
    vector<string> str{"eat","tea","tan","ate","nat","bat"};
    vector<vector<string> > ans = groupAnagrams(str);

    for(int i=0; i<ans.size();i++) {
        for(int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

return (0);
}