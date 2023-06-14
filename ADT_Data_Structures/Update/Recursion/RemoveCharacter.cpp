/*
GFG: https://practice.geeksforgeeks.org/problems/remove-character3815/1
*/

#include<iostream>
using namespace std;
 
    void helperRE(string& s1,string& s2, size_t index, int i) {
      if(index == string::npos) {
          return;
      }
      
      s1.erase(index,1);
      index = s1.find(s2[i]);
      
      helperRE(s1,s2,index,i);
      
  }
  
    string removeCharsRE(string string1, string string2) {
       
       for(int i=0; i<string2.size(); i++) {
           size_t index = string1.find(string2[i]);
           helperRE(string1,string2,index,i);
       } 
       return string1;
       
    }

    // TC: O(m*N) = m:size of stirng1 n:size of string2
    string removeChars(string string1, string string2) {
       
       for(int i=0; i<string2.size(); i++) {
           size_t index = string1.find(string2[i]);
           
          while(index != string::npos) {
              string1.erase(index,1);
              index = string1.find(string2[i]);
          }
        
       } 
       return string1;
       
    }

int main() {
 
    string string1="computer";
    string string2="cat";
    cout<<removeChars(string1,string2);

return (0);
}