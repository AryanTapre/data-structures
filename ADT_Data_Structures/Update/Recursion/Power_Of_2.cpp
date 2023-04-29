/* getting power of 2
    created by @AryanTapre
    on date 29.04.2023
*/

#include<iostream>
using namespace std;
 
    int getPower(int N) {
        if(N == 0) return 1;
        return 2 * getPower(N-1);
    }

int main() {
    int get = getPower(3);
    cout<<get<<endl;

return (0);
}