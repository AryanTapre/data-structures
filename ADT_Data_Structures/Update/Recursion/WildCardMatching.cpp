/*
LeetCode : 44 (HARD LEVEL)
*/

#include<iostream>
using namespace std;
 
    bool matchHelper(string& s, int si, string& p, int pi) {
        //base case:
        if(si == s.size() && pi == p.size()) {
            return true;
        }

        if(si == s.size() && pi <p.size()) {
            while(pi<p.size()) {
                if(p[pi] != '*') {
                    return false;
                }
                pi++;
            }
            return true;
        }


        // single char matching..
        if(s[si] == p[pi] || p[pi] == '?') {
            matchHelper(s,si+1,p,pi+1);
        }

        if(p[pi] == '*') {
            // treat * as null
            bool caseA = matchHelper(s,si,p,pi+1);
            // consume * for one character
            bool caseB = matchHelper(s,si+1,p,pi);
            
            return caseA || caseB;
        }

        // s is empty and p is not all *
        return false;

    }
 
    // TC: O(2^N) : beacuse we have two calls on each stage
    // SC: O(N+1) = O(N)
    bool isMatch(string& s,string& p) {
        int si = 0;
        int pi = 0;
        return matchHelper(s,si,p,pi);
    }

int main() {
    string s = "abc";
    string p = "abm";
    cout<<isMatch(s,p);
return (0);
}