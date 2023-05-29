/*
print all subArrays from given array using recursion.
*/

#include<iostream>
using namespace std;
 
    void subArray(string& str, string& out, int i) {
        if(i >= str.length()) {
            if(out == "") {
                cout<<"space"<<endl;
            } else {
                    cout<<out<<endl;
            }
            
            return;
        }

        // include
        out.push_back(str[i]);
        subArray(str,out,i+1);

        // exclude.
        out.pop_back();
        subArray(str,out,i+1);
    }

int main() {
 
    string s = "12";
    string out;
    int i = 0;
    subArray(s,out,i);

return (0);
}