#include<map>
#include<iostream>
using namespace std;
 
int main() {

    map<int,string> studentRollNo;
    // studentRollNo = {
    //     {1,"aryan"}
    // };

    studentRollNo.insert(pair<int,string>(1,"aryan tapre"));
    studentRollNo.insert(pair<int,string>(2,"manish shah"));
    studentRollNo.insert(pair<int,string>(3,"ramanujan "));
    studentRollNo.insert(pair<int,string>(4,"ramesh mishra"));
    studentRollNo.insert(pair<int,string>(1,"aryan tapre"));


    // for(auto i : studentRollNo) {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    map<int,string> :: iterator ite;
    ite = studentRollNo.begin();
    while(ite != studentRollNo.end()) {
        cout<<ite->first<<" "<<ite->second<<endl;
        ite++;
    }

    if(studentRollNo.find(5) != studentRollNo.end()) {
        cout<<"Match found.."<<endl;
    } else {
        cout<<"Match NOT found.."<<endl;
    }

    studentRollNo.erase(1);
    ite = studentRollNo.begin();
    while(ite != studentRollNo.end()) {
        cout<<ite->first<<" "<<ite->second<<endl;
        ite++;
    }

    cout<<endl<<"Size of map:"<<studentRollNo.size()<<endl;
    
    if(studentRollNo.empty()) {
        cout<<"map is empty"<<endl;
    } else {
        cout<<"map is NOT empty"<<endl;
    }

    studentRollNo.clear();
    cout<<endl;
     if(studentRollNo.empty()) {
        cout<<"map is empty"<<endl;
    } else {
        cout<<"map is NOT empty"<<endl;
    }



return (0);
}
