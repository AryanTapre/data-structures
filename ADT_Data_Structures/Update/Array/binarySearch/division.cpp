#include<iostream>
using namespace std;

 int divide(int dividend, int divisor) {

      if(divisor == 0 || dividend == 0) {
        cout<< "Undefined"<<endl;
        exit(0);    
      }
      else if (divisor == 1) {
            if((dividend>0 && divisor>0) || (dividend<0 && divisor<0)) {
                int ans = dividend;
                return ans;
            }
            else {
                int ans = dividend;
                return -ans;
            }
      }  
      int start = 0;
      int end = abs(dividend);
      int mid = start+(end-start)/2;
      int ans = -1;

      while(start<=end) {
        if(abs(mid*divisor) == abs(dividend)) {
            ans= mid;
            break;
        }
        else if (abs(mid*divisor) > abs(dividend)) {
            end = mid-1;
        }
        else {
            start = mid+1;
            ans = mid;
        }
        mid = start+(end-start)/2;
      }
      
      if((dividend>0 && divisor>0) || (dividend<0 && divisor<0)) {
        return ans;
      }
      else {
        return -ans;
      }
}
      
int main() {
    cout<<"Quotient is : "<<divide(-2147483648,1);
return (0);
}