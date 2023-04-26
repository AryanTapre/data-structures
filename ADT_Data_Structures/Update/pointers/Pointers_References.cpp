/* There are three ways to pass c++ arguments.
    (1) pass by value
    (2) pass by reference with a pointer argument
    (3) pass by reference with a reference argument
        */


#include<bits/stdc++.h>
using namespace std;

int square1(int n) {
    
    // address of n is not same in square1() and main()
    cout<<"address of n1 in square1() : "<<&n<<endl;
    n = n * n;
    return n;
}

void square2(int *n) {

    cout<<"address of n2 in square2() : "<<n<<endl; 
    *n = *n * *n;
}

void square3(int &n) {

    cout<<"address of n3 in square3() : "<<&n<<endl; 
    n = n * n;
}


// driver code.
int main() {

    int n1 = 40;
    cout<<"pass by value ------------->"<<endl;
    cout<<"address of n1 in main() : "<<&n1<<endl;
    cout<<"square of n1 : "<<square1(n1) <<endl;
    cout<<"no change in n1 : "<<n1;

    int n2 = 89;
    cout<<"pass by reference with pointer args ------------->"<<endl;
    cout<<"address of n2 in main() : "<<&n2<<endl;
    square2(&n2);
    cout<<"square of n2 : "<<n2<<endl;
    cout<<"changes reflected in n2 : "<<n2<<endl;

    int n3 = 23;
    cout<<"pass by reference with reference args ------------->"<<endl;
    cout<<"address of n3 in main() : "<<&n3<<endl;
    square3(n3);
    cout<<"square of n3 : "<<n3<<endl;
    cout<<"changes reflected in n3 : "<<n3<<endl;





return 0;    
}