#include<iostream>
using namespace std;

#define PI 3.14
#define MAXX(a,b) (a>b? a : b)

int getMax(int a, int b) {
    return MAXX(a,b);
}

float getCircleArea(float radius) {
    return PI * (radius) * (radius);
}

int main() {
 
    cout<<getMax(10,20)<<endl;

    cout<<getCircleArea(2.23)<<endl;


return (0);
}