// https://www.spoj.com/problems/EKO/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    int possibleSolution(vector<int>tree, int M,int mid) {
        int sum = 0;
        for(int i=0; i<tree.size(); i++){
            if((tree[i]-mid)>0) {
                sum = sum + (tree[i]-mid);
            }
        } 
        return sum;
    }
 
    int findSawbladeHeight(vector<int> tree, int M) {
        int start = 0;
        int end = *max_element(tree.begin(),tree.end());
        int ans = -1;
        int mid;
        while(start <= end) {
             mid = start+(end-start)/2;
            ans = possibleSolution(tree,M,mid);
            if(ans == M) {
                return mid;
            }
            else if (ans > M) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return mid;
    }

int main() {
        vector<int> tree{4,42,40,26,46};
        int M = 20;
        cout<<findSawbladeHeight(tree,M)<<endl;
return (0);
}