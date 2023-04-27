/*  Returning pointer from a function in c++
    created by AryanTapre
    on date 27.04.2023
    */

#include<iostream>
using namespace std;
    
    int* solve() {
        int a = 5;
        int* ptr = nullptr;
        ptr = &a;
        return ptr;
    }

int main() {
    
    int* get = solve();
    cout<<*get<<endl;

return (0);
}