// leetcode 20

#include<iostream>
#include<stack>
using namespace std;

bool valid(string &s) {
    if(s.empty()) {
        return false;
    }


    stack<char> st;

    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {

            if(!st.empty()) {
                char topData = st.top();
                    if(ch == ')' && topData == '(') {
                        st.pop();
                    }
                    else if(ch == ']' && topData == '[') {
                        st.pop();
                    }
                    else if(ch == '}' && topData == '{') {
                        st.pop();
                    }
                    else {
                       return false;
                    }
            }
            else  {
                return false;
            }
                    
        }
    }

    if(st.empty()) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    string s = "{}{}{}{{}{}{}}" ;
    cout<<s<<endl;

    cout<<valid(s);

return 0;
}