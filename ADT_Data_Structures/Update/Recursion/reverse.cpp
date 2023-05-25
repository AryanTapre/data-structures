/* Reverse given string using recursion
    created by- @AryanTapre
    on date- 25-05-2023
*/
#include<iostream>
using namespace std;
 
    void reverse(string& str, int i, int j) {
        // baseCondition::
        if(i == j || j<i) {
            return;
        }

        swap(str[i],str[j]);
        cout<<"status:"<<str<<endl;
        reverse(str,i+1,j-1);
    }

int main() {
    string str = "aryan";
    int i = 0, j = str.length()-1;
    reverse(str,i,j);
    cout<<str<<endl;

return (0);
}