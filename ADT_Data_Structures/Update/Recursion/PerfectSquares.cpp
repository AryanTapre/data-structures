/*
leetcode : 279 https://leetcode.com/problems/perfect-squares/
*/

#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

    int numSquareHelper(int n) {
        //base case:
        if(n == 0) return 1;
        if(n < 0) return 0;

        int i=1;
        int ans = INT_MAX;
        int end = sqrt(n);

        while(i <= end) {

            int perfectSquare = i*i;
            int numberOfPerfectSquares = 1 + numSquareHelper(n-perfectSquare);
            
            if(numberOfPerfectSquares < ans) {
                ans = numberOfPerfectSquares;
            }
            i++;
        }
        return ans;
    }

    // TC: O(sqrt(N)^N) = O(N^N)
    // SC: O(N+1) = O(N)
    int numSquares(int n) {
        return numSquareHelper(n)-1;
    }

int main() {

    int n=13;
    cout<<numSquares(n);

return (0);
}