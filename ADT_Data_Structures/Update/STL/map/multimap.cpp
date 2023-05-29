#include<map>
#include<iostream>
using namespace std;
 
int main() {
 
    multimap<int,string> student;
    student.insert(pair<int,string>(1,"aryan tapre"));
    student.insert(pair<int,string>(1,"aryan tapre"));

    for (auto &&i : student)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    

return (0);
}