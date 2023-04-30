/* For given N stairs find numbers of ways to reach Nth stair
    conditions:
        1 step at a time
        2 step at a time    
    Leetcode : 70
*/

#include<iostream>
using namespace std;
 
    int climbStairs(int N) {
        if(N == 0) return 1;
        if(N < 0 ) return 0;

        int stairsClimbed = climbStairs(N-1) + climbStairs(N-2);
        return stairsClimbed; 
    }

int main() {
    int getStairs = climbStairs(5);
    cout<<getStairs<<endl;
return (0);
}