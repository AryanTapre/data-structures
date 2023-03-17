// given N denoting size of rod ,find maximum numbers of segment made using three values i.e x,y,z 

#include<iostream>
#include<limits.h>
using namespace std;
 
    int solve(int rodSize, int x, int y, int z) {
      if(rodSize == 0) {
            return 0;
      }

      if(rodSize < 0){
        return INT_MIN;
      }  

      int ans1 = solve(rodSize-x,x,y,z) + 1;
      int ans2 = solve(rodSize-y,x,y,z) + 1;
      int ans3 = solve(rodSize-z,x,y,z) + 1;

      int ans = max(ans1,max(ans2,ans3));
      return ans;
         
    }

int main() {
 
    int rodSize = 7;
    int x = 5, y = 2, z = 2 ;
    int ans = solve(rodSize,x,y,z);

    if(ans < 0)
        ans = 0;
    cout << ans <<endl;

return (0);
}