#include<bits/stdc++.h>
using namespace std;

    bool isMatched(string s,string p) {
        int i = 0;
        int j=i;
        bool t=true;
        for(i; i<p.length(); i++) {

            if(p[i]!= '?' && p[i]!= '*') {
                if(p[i]!=s[j]) {
                    t = false;
                    break;
                } else {
                    j++;
                }
                cout<<"first"<<endl;
            }
            else{
                if(p[i] == '*'){
                    t =true;
                    break;
                }
                else {
                    j++;
                }
                cout<<"second"<<endl;
            }
        }
        if(i>j) {
            return false;
        }
        return t;
    }


int main() {

    string s ="aa",p="a";
    if(isMatched(s,p)) {
        cout<<"yes";
    }
    else {
        cout<<"no";
    }

}