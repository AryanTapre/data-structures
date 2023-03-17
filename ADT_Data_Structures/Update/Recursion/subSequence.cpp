// print all subsequences of given string 
// maths: power set
// e.g : {a,b} = {"",a,b,ab} 

#include<iostream>
using namespace std;
 
    void printSubSequences(string str, string output, int i) {
        if(i >= str.length()) {
            if(output == "") cout<<"empty string"<<endl;
            else cout<<output<<endl;
            return;
        }

        // include char case:
        output.push_back(str[i]);
        printSubSequences(str,output,i+1);

        // exclude char case;
        output.pop_back();
        printSubSequences(str,output,i+1);
    }

int main() {
 
    string str = "xyz";
    string output = "";
    int i = 0;

    printSubSequences(str,output,i);
    
return (0);
}