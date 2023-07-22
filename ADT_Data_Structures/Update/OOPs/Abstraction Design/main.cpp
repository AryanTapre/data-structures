#include"Bird.h"
#include<iostream>
using namespace std;
 
void doSomething(Bird* bird) {
    bird->eat();
    bird->fly();
}


int main() {

    Bird* bird = new Pigeon();
    doSomething(bird);    // Passing reference of object Bird NOT actual object...



return (0);
}