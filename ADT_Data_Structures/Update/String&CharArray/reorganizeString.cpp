// 767. Reorganize String
#include<string>
#include<limits.h>
#include<iostream>
using namespace std;
 
    void reorganizeString(string s) {
        int hash[26] = {0};
        for(int i=0; i<s.size(); i++) {
            hash[s[i]-'a']++;
        }

        // finding most frequency char..
        char max_freq_char;
        int max_freq =INT_MAX;
        for(int i=0;i<26;i++){
            if(hash[i] > max_freq) {
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }

        cout<<max_freq<<endl;
   
    }

int main() {
    string s = "aabba";
    reorganizeString(s);
return (0);
}