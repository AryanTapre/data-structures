#include<stack>
#include<iostream>
using namespace std;

bool isRedundantBracket(string &s) {
    stack<char>st;
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(ch=='(' || ch=='+' || ch=='-' || ch =='*' || ch=='/'){
                st.push(ch);
            }
            else{
                if(!st.empty() && ch==')'){
                    if(st.top() == '('){
                        return true;
                    }
                    else{
                        while(st.top() != '('){
                            st.pop();
                        }
                        st.pop();
                    }
                }
            }
        }
        return false;
}

int main() {

    string str = "()";
  
    if(isRedundantBracket(str)) {
        cout<<"yes, redundant.."<<endl;
    }
    else  {
        cout<<"NO, Redundant.."<<endl;
    }

return 0;
}