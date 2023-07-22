#include<iostream>
using namespace std;

class Student {
    public:
        int rollNO;
        int age;

    Student() {

    }    

    Student(const Student &stu) {
        this->age = stu.age;
        this->rollNO = stu.rollNO;
    }
};



int main() {

    Student s1;
    Student s2(s1);
    s1.rollNO = 101;
    s1.age = 20;

    cout<<s2.age<<" "<<s2.rollNO<<endl; 

return (0);
}