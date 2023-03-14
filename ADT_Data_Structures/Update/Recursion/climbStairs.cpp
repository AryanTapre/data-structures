// leet code 70.
#include<iostream>
using namespace std;
    int climbStairs(int n) {
        if(n == 0 || n == 1) return 1;
        int ans = climbStairs(n-1)+climbStairs(n-2);
        return ans;
    }
int main() {
    
    cout<<climbStairs(3);


return (0);
}