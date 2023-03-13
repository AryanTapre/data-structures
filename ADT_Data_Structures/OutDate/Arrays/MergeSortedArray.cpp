// Leet code PROBLEM: 88. Merge Sorted Array

#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> & num1,int m,vector<int> num2,int n) {

    int i = 0, j = 0;

    while(i<m && j<n) {

        if(num1[i] < num2[j]) {
            
            i++;
        }
        else if (num1[i] == num2[j]) {

            int k = m-1;
            while(k>i) {
                
                num1[k+1] = num1[k];
                k--;
            }
            num1[i+1] = num2[j];
            i+=2;
            j++;


        }
        else {

            int k = m;
            while(k>i) {
                
                num1[k+1] = num1[k];
                k--;
            }
            num1[i+1] = num2[j];
            i+=2;
            j++;

        } 
    }
    
    i++;
    
    // copy remaining array..
    while(j<n) {

        num1[i] = num2[j];
        i++;
        j++;
    }
}

void print(vector<int> g) {

    for(int i = 0; i<g.size(); i++) {
        cout<<g[i]<<" ";
    }
    cout<<endl;
}

int main() {

    vector<int> num1;
    vector<int> num2;

    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(0);
    num1.push_back(0);
    num1.push_back(0);

    num2.push_back(2);
    num2.push_back(5);
    num2.push_back(6);

    int m = 3, n = 3;

    merge(num1,m,num2,n);
    print(num1);


    return 0;
}