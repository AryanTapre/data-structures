/*  returns nth term in  fibonacci series
    created by @AryanTapre
    on date 29.04.2023
    */

#include<iostream>
using namespace std;
 
    int fibonacci(int N) {
        if(N == 1) return 0;
        if(N == 2) return 1;
        int ans = fibonacci(N-1) + fibonacci(N-2);
        return ans;
    }

int main() {
 
    int get = fibonacci(4);
    cout<<get<<endl;

return (0);
}