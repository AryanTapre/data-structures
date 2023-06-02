/*
GFG: https://practice.geeksforgeeks.org/problems/common-elements1132/1
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            set<int> setT;
            for(int i=0; i<n1; i++){
                
                if(binary_search(B,B+n2,A[i])) {
                    if(binary_search(C,C+n3,A[i])) {
                        setT.insert(A[i]);
                    }
                }
            }
            
            
            for(auto i : setT) {
                ans.push_back(i);
            }
            return ans;
        }

int main() {
    
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6;
    int n2 = 5;
    int n3 = 8;

    vector<int> ans = commonElements(A,B,C,n1,n2,n3);
    for (auto &&i : ans)
    {
        cout <<i<<" ";
    }
    



return (0);
}