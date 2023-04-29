/*  printing count in reverse order
    created by @AryanTapre
    on date 29.04.2023
    */
   
#include<iostream>
using namespace std;

    void printCount(int n) {
        if(n == 0) return;    // baseDATA_STRUCTURES/ADT_Data_Structures/Update/Recursion/Print_Count.cpp condition
        cout<<n<<" ";         // processing part
        printCount(n-1);     // recursive relation i.e call
    }

int main() {

    printCount(5);

return (0); 
}