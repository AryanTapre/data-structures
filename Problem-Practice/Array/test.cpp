#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main() {
    
       vector<vector<int>> matrix = {
            {1,2,3},
            {4,5,6},
            {7,8,9},
            {10,11,12}
       };

       int m = matrix.size();
       int n = matrix[0].size();
       int total_elements = m*n;

       int sr = 0;
       int ec = n-1;
       int er = m-1;
       int sc = 0;

       int count = 0;
       while(count < total_elements) {

        // print start row
        for(int i=sc; i<=ec && count < total_elements; i++) {
            cout<<matrix[sr][i]<<" ";
            count+=1;
        }
        sr++;

        // print ending column
        for(int i=sr; i<=er && count < total_elements; i++) {
            cout<<matrix[i][ec]<<" ";
            count+=1;
        }
        ec--;

        // print ending row
        for(int i=ec; i>=sc &&count < total_elements; i--) {
            cout<<matrix[er][i]<<" ";
            count+=1;
        }
        er--;

        // print start column
        for(int i=er; i>=sr&&count < total_elements; i--) {
            cout<<matrix[i][sc]<<" ";
            count+=1;
        }
        sc++;



       }
       

        


return (0);
}