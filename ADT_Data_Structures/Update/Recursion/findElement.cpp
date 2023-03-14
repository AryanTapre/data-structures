// find key in given string..
#include<iostream>
#include<string>
using namespace std;
 
    int checkKey(string& str, int& i, int& n , char& key) {
        if(str[i] == '\0') {
            return -1;
        }

        if(str[i] == key) {
            return i;
        }
        return checkKey(str,++i,n,key);
    }

int main() {
    
    string str = "aryan";
    int n = str.length();
    char key = 'a';
    int i = 0;

    int ans = checkKey(str,i,n,key);
    cout<<"answer found at index : "<<ans<<endl;

return (0);
}